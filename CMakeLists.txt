cmake_minimum_required(VERSION 3.12.2)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/../ADCS_Eigen/Build)
set (CMAKE_BINARY_DIR ${CMAKE_HOME_DIRECTORY}/../ADCS_Eigen)

project(ADCS_Eigen)	#project name

include_directories (
    Eigen			# includes Eigen which is located inside the project folder
)
add_executable ( MatrixTesting 
    ADCS_Eigen.cpp
)
