cmake_minimum_required(VERSION 3.16)

project(D500Controller VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Qml Quick Core QuickControls2 SerialBus LinguistTools)

qt_standard_project_setup(
    REQUIRES 6.8
    I18N_SOURCE_LANGUAGE en
    I18N_TRANSLATED_LANGUAGES ua
)

qt_add_executable(appD500Controller
    src/main.cpp
    src/ConnectionManager.cpp
    src/EngineStats.cpp
    src/NetworkStats.cpp
    src/SettingsManager.cpp
    src/ManualController.cpp
    src/abstracts/AbstractStats.cpp
)

qt_add_translations(
    appD500Controller
    NO_GENERATE_PLURALS_TS_FILE
    TS_FILES translations/ua_UA.ts
)

qt_add_qml_module(appD500Controller
    URI D500Controller
    VERSION 1.0
    QML_FILES
        qml/Main.qml
        qml/Controls.qml
        qml/InformationPanel.qml
        qml/panels/Engine.qml
        qml/panels/Connection.qml
        qml/panels/Network.qml
        qml/panels/ManualControl.qml
        qml/components/DataCell.qml
        qml/components/StatusBar.qml

    RESOURCES resources.qrc
    SOURCES
        src/ConnectionManager.h src/ConnectionManager.cpp
        src/EngineStats.h src/EngineStats.cpp
        src/SettingsManager.h src/SettingsManager.cpp
        src/abstracts/AbstractStats.h src/abstracts/AbstractStats.cpp
        src/NetworkStats.h src/NetworkStats.cpp
        src/ManualController.h src/ManualController.cpp
        RESOURCES .gitignore
)

qt_add_resources(appD500Controller "resources"
    PREFIX "/"
    FILES
        icons/power-tower-icon.svg
        icons/battery-icon.svg
        icons/automatization-icon.svg
        icons/gears-icon.svg
        icons/hand-icon.svg
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appD500Controller PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appD500Controller
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appD500Controller
    PRIVATE Qt6::Quick Qt6::SerialBus Qt6::Core Qt6::Qml Qt6::QuickControls2
)

include(GNUInstallDirs)
install(TARGETS appD500Controller
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
