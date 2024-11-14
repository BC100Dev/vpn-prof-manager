CollectSources(${PROJECT_MODULE_ROOT} MOD_SOURCES)

add_executable(vpn-manager ${MOD_SOURCES})

target_link_libraries(vpn-manager PRIVATE VpnMgr-Commons)