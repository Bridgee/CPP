cmake_minimum_required(VERSION 3.10)
project(maze)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(maze
        maze.cpp
        MazeMap.cpp
        MazeMap.h
        MazePerson.cpp
        MazePerson.h
        MyMazeMap.cpp
        MyMazeMap.H
        MyMazer.cpp
        MyMazer.H
        Public.H)
