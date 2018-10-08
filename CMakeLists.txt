cmake_minimum_required(VERSION 3.12)
project(COMP_345_Project)

set(CMAKE_CXX_STANDARD 17)

add_executable(COMP_345_Project Part-1/Map.cpp Part-1/Map.h Drivers/Tests.cpp Drivers/Tests.h Part-2/MapLoader.cpp Part-2/MapLoader.h Part-5/tile.h Part-5/stack.h Part-5/monster.h Part-5/controller.cpp Part-5/cards.h Part-5/token.h)