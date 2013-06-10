# CMakeLists files in this project can 
# refer to the root source directory of the project as ${EMGlocomotionCLassifier_SOURCE_DIR} and 
# to the root binary directory of the project as ${EMGlocomotionClassifier_BINARY_DIR}. 
CMAKE_MINIMUM_REQUIRED (VERSION 2.6) 
PROJECT(CEINMS)


IF(WIN32)
	SET(CMAKE_CXX_FLAGS "/EHsc")# -std=c++11 -fpermissive")
ENDIF(WIN32)
IF(UNIX)
	SET(CMAKE_BUILD_TYPE Release)
	SET(CMAKE_CXX_FLAGS "-O3")
	SET(CMAKE_EXE_LINKER_FLAGS "-O3")
	SET(CMAKE_SHARED_LINKER_FLAGS "-O3")
ENDIF(UNIX)

SET(CMAKE_VERBOSE_MAKEFILE OFF)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR})

set(Boost_USE_STATIC_LIBS   ON)
set(Boost_USE_MULTITHREADED ON)
find_package(Boost COMPONENTS thread date_time program_options filesystem system chrono REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

find_package(XSD REQUIRED)
include_directories(${XSD_INCLUDE_DIR})

find_package(XERCES REQUIRED)
include_directories(${XERCES_INCLUDE_DIR})

#find_package(Eigen3 REQUIRED)
#include_directories(${EIGEN3_INCLUDE_DIR})

SUBDIRS(lib/xmlInput lib/NMSmodel lib/FileIO lib/Producers lib/Calibration src)

set(dir ${CMAKE_CURRENT_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${dir} CACHE PATH "Build directory" FORCE)
set(LIBRARY_OUTPUT_PATH ${dir} CACHE PATH "Build directory" FORCE)

