find_package(PkgConfig REQUIRED)
pkg_check_modules(DBUS REQUIRED dbus-1)

CollectSources("${PROJECT_MODULE_ROOT}" MOD_SOURCES)

add_library(VpnMgr-NMConnector ${APP_COMPILATION_LibType} ${MOD_SOURCES})

target_include_directories(VpnMgr-NMConnector PRIVATE ${DBUS_INCLUDE_DIRS})
target_link_libraries(VpnMgr-NMConnector PRIVATE ${DBUS_LIBRARIES})