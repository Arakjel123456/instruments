cmake_minimum_required (VERSION 2.6)
project (Instruments)

if(CMAKE_COMPILER_IS_GNUCXX)
    add_definitions(-std=gnu++0x)
endif()

include_directories ("${PROJECT_SOURCE_DIR}/include")

add_executable(Instruments 
		src/drum.cpp
		src/guitar.cpp
		src/instrument.cpp
		src/main.cpp
		src/store.cpp
		src/worker.cpp)
