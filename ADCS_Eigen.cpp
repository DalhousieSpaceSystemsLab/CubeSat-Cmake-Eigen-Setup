// ADCS_Eigen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include "Eigen/Dense"

#define	testparse	// outputs to terminal for testing the parse function

enum returnvals{FAIL, SUCCESS};
#define IGRF_READLINES	104
#define MAX_MN_VALUE	13

/* storage arrays for g and h */
float g_nominal[MAX_MN_VALUE][MAX_MN_VALUE];	// g[m][n]
float h_nominal[MAX_MN_VALUE][MAX_MN_VALUE];	// h[m][n]

using Eigen::Matrix3d;
using namespace std;

int main()
{
	if (Parse_IGRF()) {
		// continue the program
	}
}

int Parse_IGRF(void) {
	ifstream IGRFconstants;
	IGRFconstants.open("IGRF12.txt", ifstream::in);

	int m = 0, n = 0;
	float


	if (!IGRFconstants) {
#ifdef testparse
		cout << "unable to open the IGRF file\n";
#endif
		return FAIL;
	}
	while (IGRFconstants) {
		IGRFconstants>>
	}
}