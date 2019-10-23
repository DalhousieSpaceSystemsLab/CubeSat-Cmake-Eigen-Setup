// ADCS_Eigen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Eigen/Dense"

using Eigen::Matrix3d;

int main()
{
	Matrix3d m = Matrix3d::Random();
	std::cout << "Here is the randomly generated matrix:" << std::endl;
	std::cout << m << std::endl << std::endl;

	std::cout << "Its transpose is:" << std::endl << m.transpose() << std::endl << std::endl;

	std::cout << "Its inverse is:" << std::endl <<m.inverse() << std::endl << std::endl;

	std::cout << "Its pseudo-inverse is:" << std::endl << m.completeOrthogonalDecomposition().pseudoInverse() << std::endl << std::endl;
}