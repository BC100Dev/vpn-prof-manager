find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

CollectSources(${PROJECT_MODULE_ROOT} MOD_SOURCES)

add_executable(VpnProfManager-GUI ${MOD_SOURCES})

target_link_libraries(VpnProfManager-GUI Qt6::Core Qt6::Gui Qt6::Widgets)