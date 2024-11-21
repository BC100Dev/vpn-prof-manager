#ifndef VPNPROFMGR_FUNCTIONCALLER_HPP
#define VPNPROFMGR_FUNCTIONCALLER_HPP

#include <functional>
#include <string>
#include <map>
#include <vector>

namespace Application::Commands {

    extern std::map<std::string, std::function<int(const std::vector<std::string> &)>> functions;

    bool HasCommand(const std::string &cmd);

}

#endif //VPNPROFMGR_FUNCTIONCALLER_HPP
