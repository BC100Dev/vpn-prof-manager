#include "src/CmdDecl.hpp"

#include "FunctionCaller.hpp"

namespace Application::Commands {

    std::map<std::string, std::function<int(const std::vector<std::string> &)>> functions = {
            {"create", CallCreate},
            {"load", CallLoad},
            {"apply", CallApply},
            {"remove", CallRemove},
            {"list", CallList},
            {"info", CallInfo},
            {"change", CallChange}
    };

    bool HasCommand(const std::string& cmd) {
        return functions.find(cmd) != functions.end();
    }

}