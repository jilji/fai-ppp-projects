project(pong)
 
cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

if( WIN32 )
  # prevent link errors with wx 2.9.x
  add_definitions( -DwxDEBUG_LEVEL=0 -D_UNICODE -DNDEBUG )
endif()

find_package(wxWidgets COMPONENTS core base xrc REQUIRED)

include( "${wxWidgets_USE_FILE}" )

add_executable(
    ${PROJECT_NAME}
    gui.cpp
    main.cpp
    util.cpp
    )
 
target_link_libraries(
    ${PROJECT_NAME}
    ${wxWidgets_LIBRARIES}
    )