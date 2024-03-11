cmake_minimum_required(VERSION 3.5)

project(Aflevering LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Aflevering main.cpp
    Bin.h Bin.cpp
    Student.h Student.cpp)

include(GNUInstallDirs)
install(TARGETS Aflevering
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
