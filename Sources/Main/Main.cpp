#include <VPNProfMgr/Commons/HelpPage.hpp>

#include <iostream>
#include <vector>
#include <string>

#include "FunctionCaller.hpp"

void helpPls() {
    std::cout << "VPN Profile Manager" << std::endl << std::endl;
    std::cout << "Commands:" << std::endl;

    HelpPage page;
    page.addArg("create", "", "Operates on creation of profiles and VPNs");
    page.addArg("load", "", "Loads in configuration files into a particular namespace (Profiles / VPNs)");
    page.addArg("apply", "", "Applies the configurations to NetworkManager");
    page.addArg("remove", "", "Removes VPN / Profile Information");
    page.addArg("list", "", "Lists profiles and VPNs");
    page.addArg("info", "", "Displays information about a VPN and/or Profile(s)");
    page.addArg("change", "", "Changes configurations about a VPN and Profiles");
    page.setStartSpaceWidth(3);
    page.setSpaceWidth(5);
    page.display(std::cout);
}

int main(int argc, char **c_argv) {
    std::vector<std::string> args;

    if (argc != 1) {
        args = std::vector<std::string>(argc - 1);

        for (int i = 1; i < argc; i++)
            args[i - 1] = c_argv[i];
    }

    if (args.empty()) {
        helpPls();
        return 0;
    } else if (args.size() == 1) {
        HelpPage page;
        page.setStartSpaceWidth(2);
        page.setSpaceWidth(4);

        std::cout << "Commands for " << args[0] << ":" << std::endl;

        if (args[0] == "create") {
            page.addArg("create profile [name] (identifier)", "", "Creates a new VPN profile");
            page.addArg("create vpn [name] (identifier)", "", "Creates a new VPN connection");
            page.addArg("create prof-vpn [profile-identifier] [name] (identifier)", "",
                        "Creates a new VPN for a profile");
        } else if (args[0] == "load") {
            page.addArg("load [identifier] [type] [config file] (config files)", "",
                        "Loads in one or more configuration files, depending on the type (OpenVPN, Wireguard etc.)");
            page.addArg("load -ifj [file] (identifier)", "",
                        "Loads in a JSON configuration from pre-defined Profile and VPN sets");
        } else if (args[0] == "apply") {
            page.addArg("apply [identifier]", "", "Write the information to NetworkManager");
            page.addArg("apply [identifier]/(identifier)", "",
                        "Writes only specific VPN configurations into NetworkManager");
            page.addArg("apply -ifj [file]", "",
                        "Writes the information from a JSON configuration directly into NetworkManager");
        } else if (args[0] == "remove") {
            page.addArg("remove profile [name] (identifier)", "", "Removes a VPN profile");
            page.addArg("remove vpn [name] (identifier)", "", "Removes a VPN connection");
            page.addArg("remove prof-vpn [profile-identifier] [name] (identifier)", "", "Removes a VPN from a profile");
            page.addArg("", "", "-- Any removal effects will automatically invoke NetworkManager");
        } else if (args[0] == "list") {
            page.addArg("list profiles (--all) (--vpn-list) (--identifier)", "",
                        "Lists profiles, with certain flags showing a list of all profiles and their VPNs installed");
            page.addArg("list vpn (--all) (--profile-member) (--identifier)", "", "Lists installed VPN configurations");
        } else if (args[0] == "info") {
            page.addArg("info vpn [identifier]", "", "Displays the VPN configuration");
            page.addArg("info profile [identifier]", "", "Displays the Profile configuration");
        } else if (args[0] == "change") {
            page.addArg("change vpn [key] [value]", "",
                        "Changes a specific name of the key with a corresponding value for the VPN");
            page.addArg("change profile [key] [value]", "",
                        "Changes a specific name of the key with a corresponding value for the Profile");
            page.addArg("", "", "-- use \"--list-keys\" to view all available keys");
        } else if (args[0] == "--help") {
            helpPls();
            return 0;
        }

        page.display(std::cout);
        return 1;
    }

    if (!Application::Commands::HasCommand(args[0])) {
        std::cerr << "VPN-Profile Manager: " << args[0] << " not found" << std::endl;
        std::cerr << "See \"vpn-prof-manager --help\" for commands" << std::endl;
        return 1;
    }

    std::vector<std::string> argv(args.begin() + 1, args.end());
    Application::Commands::functions[args[0]](argv);

    return 0;
}