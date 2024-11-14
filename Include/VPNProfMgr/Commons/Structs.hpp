#ifndef VPNPROFMGR_STRUCTS_HPP
#define VPNPROFMGR_STRUCTS_HPP

#define VPN_AUTH_CERT_AUTHORITY "cert_ca"

#define VPN_AUTH_CERT_USERC "user_cert"
#define VPN_AUTH_CERT_USERK "user_key"
#define VPN_AUTH_CERT_KEY_PASS "key_password"

#define VPN_AUTH_USER_NAME "user_name"
#define VPN_AUTH_USER_PASS "user_password"

#define VPN_AUTH_STATIC_KEY "static_key"
#define VPN_AUTH_STATIC_KEY_DIR "key_direction"
#define VPN_AUTH_STATIC_REMOTE_INET "static_remote_inet"
#define VPN_AUTH_STATIC_LOCAL_INET "static_local_inet"

#include <string>
#include <vector>
#include <map>

enum VPN_Authentication {
    VPN_AUTH_CERTS = 0,
    VPN_AUTH_PASS = 1,
    VPN_AUTH_PASS_CERTS = 2,
    VPN_AUTH_KEYS = 3
};

enum VPN_CompressionType {
    LZO = 0,
    LZO4 = 1,
    LZO4v2 = 2,
    Automatic = 3,
    LZO_Disabled = 4,
    LZO_Adaptive = 5
};

struct VPN_Properties {
    int gatewayPort;
    int regenInterval;
    bool compressionAsymmetric;
    VPN_CompressionType compressionType;
    bool tcpConn;
    // set virtual device type [TUN|TAP] and name "(automatic)"
    bool devTypeTun;
    std::string devName;
    int mtu;
    long udpFrag;
    bool tcpMSS_tunnelRestrict;
    bool randRemoteHosts;
    bool allowPullFQDN;
    bool remoteDnsRandStr;
    bool inet6TunLink;
    int pingInterval;
    bool pingExit;
    int pingTimeout;
    bool allAddrAuthPackets;
    long maxRoutes;
};

struct VPN_Identity {
    std::string name;
    std::string gatewayUrl;
    VPN_Authentication authType;
    std::map<std::string, std::string> authMap;
};

struct VPN_Configuration {
    std::string identifier;
    std::string description;
    VPN_Identity identity;
    VPN_Properties properties;
};

struct VPN_Profile {
    std::string label;
    std::string description;
    std::string identifier;
    std::vector<VPN_Configuration> vpnConfigs;
};

#endif //VPNPROFMGR_STRUCTS_HPP
