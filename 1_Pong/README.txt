PONG game

Tested on Windows 7 & Ubuntu 15.04

Requirements
cmake (at least 2.8)
wxWidgets development package - v3.0
c++ compiler and make tool

Build instructions - Linux
$ mkdir build && cd build
$ cmake ..
$ make
$ ./pong

Build instructions - Windows
> mkdir build && cd build
> cmake -G "MinGW Makefiles" ..
> mingw32-make
> pong.exe