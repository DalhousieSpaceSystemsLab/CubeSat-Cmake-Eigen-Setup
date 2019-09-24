cmake_minimum_required(VERSION 3.12.2)

project(ADCS_Eigen)

project(EigenTest)

include_directories (
	include/eigen
)
add_executable ( MatrixTesting 
	ADCS_Eigen.cpp
)

add_subdirectory(../ADCS_Eigen)
