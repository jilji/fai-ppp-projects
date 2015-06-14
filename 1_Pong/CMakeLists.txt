project(pong)
 
cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

if(MINGW)
  # prevent link errors with wx 2.9.x
  add_definitions( -DwxDEBUG_LEVEL=0 -D_UNICODE -DNDEBUG )
  
  # enable .rc file compilation
  set(CMAKE_RC_COMPILER_INIT windres)
  ENABLE_LANGUAGE(RC)
  SET(CMAKE_RC_COMPILE_OBJECT
    "<CMAKE_RC_COMPILER> <FLAGS> -O coff <DEFINES> -i <SOURCE> -o <OBJECT>")
endif(MINGW)

find_package(wxWidgets COMPONENTS core base xrc REQUIRED)

include( "${wxWidgets_USE_FILE}" )

set(SOURCES
	gui.cpp
    main.cpp
    util.cpp)

if(MINGW)
	set(SOURCES ${SOURCES} win_resources.rc)
endif(MINGW)
	
add_executable(
    ${PROJECT_NAME}
    ${SOURCES}
    )
 
target_link_libraries(
    ${PROJECT_NAME}
    ${wxWidgets_LIBRARIES}
    )