/*
Program: polynomialFunctionImp (implementation file)
Description: This is the implementation file.
This file will hold all of the function definitions
from the declared class type definition in the 
header file/specification file.

Date: Spetember-1-2020
*/

#include "polynomialFunction.h"

// Function Definition - polynomialFunction() (Default Constructor)
polynomialFunction::polynomialFunction()
{
	x = new double; // Will allocate a new space of memory of type double
				    // and assign it to the pointer variable.
}

// Function Definition - ~polynomialFunction() (Destructor)
polynomialFunction::~polynomialFunction()
{
	delete x;
	x = nullptr;
}

// Function Definition - setTangentLineXIntercept()
void polynomialFunction::setTangentLineXIntercept(double xIntercept)
{
	*x = xIntercept;
}

// Function Definition - findDerivative()
void polynomialFunction::findDerivative()
{
	// Assign original polynomial values to the derivative values
	dA = A;
	dB = B;
	dC = C;
	dDegree = degree;

	dC = 0; // Derivative of a Constant Function

	// Power Functions
	if (dDegree > 1) // The Power Rule - d/dx(x^n) = nx^n-1
	{
		dA = dA * dDegree;
		dDegree -= 1;
	}
	else
	{
		dDegree = 1;
	}
}

// Function Definition - getDerivative()
double polynomialFunction::getDerivative()
{
	return (dA * (pow(*x, dDegree))) + dB;
}

// Function Definition - newtonsMethod()
void polynomialFunction::newtonsMethod()
{
	// local function variable
	bool stopNewtonsMethod = false;

	// statements
	cout << fixed << showpoint << setprecision(4);
	cout << "Initializing..." << endl;
	while (!stopNewtonsMethod) // sequence of approximation loops
	{
		// Apply Newtons Method to find the sequence of approximations
		approxValue = ((A * pow(*x, degree)) + (B * *x) + C) / getDerivative(); 
		approxValue = *x - approxValue;

		approxValue = fabs(approxValue); // Denote the approximation to a positive value

		// Input the approximation for the root value
		rStandardFunction = A * pow(approxValue, degree) + (B * approxValue) + C;
		rStandardFunction = fabs(rStandardFunction); // Denote to a positive value
		
		if (rStandardFunction <= espilon) // Test if the x-intercept is close to the root(r)
		{
			cout << "\nSequence " << sequence << " of sucessive apporximations" << endl;
			cout << "converges at the root(r) " << rStandardFunction << " on the" << endl;
			cout << "x-intercept " << approxValue << endl;
			stopNewtonsMethod = true;
		}
		else
		{
			sequence++;
			*x = approxValue;
			cout << *x << endl;
		}// end if statement
	}// end stopNewtonsMethod
}

// Function Definition - Print() (Debug)
void polynomialFunction::print() const
{
	cout << "X-Intercept: " << *x << endl;
}

