################################################################
# A minimal CMake file that is compatible with sbt-jni         #
#                                                              #
# All settings required by sbt-jni have been marked so, please #
# add/modify/remove settings to build your specific library.   #
################################################################

cmake_minimum_required(VERSION 2.8.0)

# Define project and related variables
# (required by sbt-jni) please use semantic versioning
#
project (native)
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 0)

set(ROOT_DIR /data/subversions/git/github/pomadchin/PDAL)
include(${ROOT_DIR}/cmake/common.cmake NO_POLICY_SCOPE)
include(${ROOT_DIR}/cmake/compiler_options.cmake)

# pdal requires to use cpp11
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -std=c++11")

# Setup JNI
find_package(JNI REQUIRED)
if (JNI_FOUND)
    message (STATUS "JNI include directories: ${JNI_INCLUDE_DIRS}")
endif()

# Include directories
include_directories(.)
include_directories(include)
include_directories(${JNI_INCLUDE_DIRS})
include_directories(/usr/local/Cellar/libxml2/2.9.4/include/libxml2)
# include_directories(/usr/include/libxml2)
# include_directories(/data/subversions/git/github/pomadchin/PDAL)
# include_directories(/data/subversions/git/github/pomadchin/PDAL/include)
# include_directories(/data/subversions/git/github/pomadchin/PDAL/src)
# include_directories(/data/pdal-build/include)

# Sources
file(GLOB LIB_SRC
  "*.c"
  "*.cc"
  "*.cpp"
)

# Setup installation targets
# (required by sbt-jni) major version should always be appended to library name
#
set (LIB_NAME ${PROJECT_NAME}${PROJECT_VERSION_MAJOR})
add_library(${LIB_NAME} SHARED ${LIB_SRC})
install(TARGETS ${LIB_NAME} LIBRARY DESTINATION .)
