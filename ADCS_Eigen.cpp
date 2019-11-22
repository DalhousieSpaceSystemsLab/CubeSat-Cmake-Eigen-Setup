// ADCS_Eigen.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <fstream>
#include "Eigen/Dense"

#define	testparse	// outputs to terminal for testing the parse function

enum returnvals{FAIL, SUCCESS};
#define IGRF_READLINES	104
#define MAX_MN_VALUE	13

/* storage arrays for g and h */
float g_nominal[MAX_MN_VALUE][MAX_MN_VALUE];	// 
float h_nominal[MAX_MN_VALUE][MAX_MN_VALUE];	// 
float SV_g[MAX_MN_VALUE][MAX_MN_VALUE];			// secular variation of g
float SV_h[MAX_MN_VALUE][MAX_MN_VALUE];			// secular variation of h

using Eigen::Matrix3d;
using namespace std;

int Parse_IGRF(void);

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

	if (!IGRFconstants) {
#ifdef testparse
		cout << "unable to open the IGRF file\n";
#endif
		IGRFconstants.close();
		return FAIL;
	}
	else {
#ifdef testparse
		cout << "opened the IGRF file\n";
#endif
		//while (IGRFconstants) {
		IGRFconstants >> n >> m;
		IGRFconstants >> g_nominal[m][n];
		IGRFconstants >> h_nominal[m][n];
		IGRFconstants >> SV_g[m][n];
		IGRFconstants >> SV_h[m][n];
		cout << n << " " << m << " " << g_nominal[m][n] << " " << h_nominal[m][n] << " " << SV_g[m][n] << " " << SV_h[m][n];
		//}
	}
		return SUCCESS;
}