cmake_minimum_required(VERSION 3.21)
project(Train_Scheduling_App)

set(CMAKE_CXX_STANDARD 14)

add_executable(Train_Scheduling_App main.cpp MainMenu.cpp MainMenu.h Passenger.cpp Passenger.h Database.cpp Database.h Train.cpp Train.h)
