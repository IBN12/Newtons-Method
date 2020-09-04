#pragma once
/*
Program: cartesianSystem.h (specification file)
Description: This is the specification file.
This file will be used to hold the declared class
type.

Note: The class will be a abstract class type
with pure virtual functions. The pure virtual 
functions will be the x-intercept of a tangent 
line on a cartesian graph.

Date: Spetember-1-2020
*/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class cartesianSystem
{
public:
	virtual void setTangentLineXIntercept(double xIntercept) = 0;
	// Function will set the x-intercept on the 
	// cartesian graph. This x-intercept of the
	// tangent line will be close to the
	// x-interecept on the curve (namely the root
	// r that the user is seeking).

	virtual void findDerivative() = 0; 
	// Function will execute the derivative of the
	// polynomial function as the slope of the curve
	// The derivative can't equal zero because it is 
	// the divisor. (f'(x) != zero)

	virtual void newtonsMethod() = 0;
	// Function will execute Newtons Method to find the
	// x-intercept closes to the curves root(r) on the
	// graph.
};
