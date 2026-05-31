cmake_minimum_required(VERSION 3.10)
project(NaturalDisasterSurvivalTool)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main src/main.cpp src/DisasterManager.cpp src/SurvivalTool.cpp src/PlayerManager.cpp)

add_executable(tests tests/test_survival.cpp src/DisasterManager.cpp src/SurvivalTool.cpp src/PlayerManager.cpp)