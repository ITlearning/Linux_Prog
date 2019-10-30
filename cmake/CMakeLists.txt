project(linux)
cmake_minimum_required(VERSION 2.6)

include_directories(inc)
SET(SRC
	main.cpp
	util.cpp
	)

ADD_EXECUTABLE(test ${SRC})
