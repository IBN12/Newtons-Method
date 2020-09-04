#pragma once
/*
Program: polynomialFunction.h (specification file)
Description: This is the specification file.
This file will be used to hold the declared
class type. 

Note: This entire class be polynomial function with
a root.

Date: Spetember-1-2020
*/

#ifndef H_polynomialFunction
#define H_polynomialFunction
#include "cartesianSystem.h"

// Derived class
class polynomialFunction : public cartesianSystem
{
public:
	void setTangentLineXIntercept(double xIntercept);
	// Function will set the x-intercept on the 
   // cartesian graph. This x-intercept of the
   // tangent line will be close to the
   // x-interecept on the curve (namely the root
   // r that the user is seeking).

	void findDerivative();
	// Function will execute the derivative of the
	// polynomial function as the slope of the curve
	// The derivative can't equal zero because it is 
	// the divisor. (f'(x) != zero)

	double getDerivative();
	// Function will allow us to access the derivative
	// pointer variables.

	void newtonsMethod();
	// Function will execute Newtons Method to find the
	// x-intercept closes to the curves root on the
	// graph. (x_n+1 = X_n - f(x_n)/f'(x_n))

	void print() const;
	// Function will be used a debug method to output the data
	// to the console screen.
	// TODO: Delete later.

	polynomialFunction();
	// Default constructor
	// If no coefficients are set, then the default
	// constructor will set the coefficient by default.
	// random values. 

	~polynomialFunction();
	// Destructor
	// This is the destructor which will deallocate
	// memory space from our pointer variables when
	// they are out of scope.

private:
	double espilon = 0.00000000001; // variable initialized with a tolerance of 10^-12
	double approxValue;
	double rStandardFunction; // root standard function
	int sequence = 0;
	
	// Quadratic Trinomial Variables (f(x) = x^3 - 2x - 5)
	double *x;
	double A = 1;
	double B = -2;
	double C = -5;
	double degree = 3;

	// Derivative Variables (f'(x) = 3x^2 - 2
	double dA;
	double dB;
	double dC;
	double dDegree;
};
#endif