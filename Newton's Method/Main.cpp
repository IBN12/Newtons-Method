/*
Program: Main (main program)
Description: This is the user-defined program.

Date: September-1-2020
*/

#include "cartesianSystem.h"
#include "polynomialFunction.h"
using namespace std;

int main()
{
	// local variables
	polynomialFunction tangentLine;
	double x;

	// statements
	cout << "Please enter a x-intercept as a guess number: ";
	cin >> x;
	cout << endl;

	tangentLine.setTangentLineXIntercept(x);
	tangentLine.print();
	cout << endl;
	tangentLine.findDerivative();
	tangentLine.newtonsMethod();
	cout << endl;


	return 0;
}