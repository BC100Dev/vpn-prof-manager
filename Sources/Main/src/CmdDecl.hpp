#ifndef VPNPROFMGR_CMDDECL_HPP
#define VPNPROFMGR_CMDDECL_HPP

#include <vector>
#include <string>

int CallCreate(const std::vector<std::string> &args);

int CallLoad(const std::vector<std::string> &args);

int CallApply(const std::vector<std::string> &args);

int CallRemove(const std::vector<std::string> &args);

int CallList(const std::vector<std::string> &args);

int CallInfo(const std::vector<std::string> &args);

int CallChange(const std::vector<std::string> &args);

#endif //VPNPROFMGR_CMDDECL_HPP
