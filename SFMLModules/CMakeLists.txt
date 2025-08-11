cmake_minimum_required(VERSION 3.28)

project(sfml-modules)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.1
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PUBLIC FILE_SET CXX_MODULES
    FILES
        Audio.ixx
        Graphics.ixx
        Network.ixx
        SFML.ixx
        System.ixx
        Window.ixx
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    SFML::Audio
    SFML::Graphics
    SFML::Network
    SFML::System
    SFML::Window

)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)