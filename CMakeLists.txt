cmake_minimum_required(VERSION 3.16)

project(College_Task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(College_Task main.cpp
    Student.h Student.cpp
    Staff.h Staff.cpp
    Person.h Person.cpp
    Management.h Management.cpp
    College.h College.cpp)

include(GNUInstallDirs)
install(TARGETS College_Task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
