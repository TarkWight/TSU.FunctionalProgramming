cmake_minimum_required(VERSION 3.16)

project(Module5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Module5
    main.cpp
    Modern/ModernSolution.cpp
    Modern/ModernSolution.hpp
    CStyle/CStyleSolution.cpp
    CStyle/CStyleSolution.hpp
)

include(GNUInstallDirs)
install(TARGETS Module5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
