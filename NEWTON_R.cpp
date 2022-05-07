#include "NEWTON_R.h"
#include<cmath>
#include<iomanip>
NEWTON_R::NEWTON_R()
{
	x = 0.0;
	x1 = 0.0;
	fx = 0.0;
	fx1 = 0.0;
	root = 0.0;
	rootprime = 0.0;
	NO_equation = 0;
	value_of_x = 0.0;
}

double NEWTON_R::function1(double y)
{
	root = pow(y, 3.0) - 8;
	return root;
}

double NEWTON_R::function2(double y)
{
	root = 3 * y + sin(y) - exp(y);
	return root;
}

double NEWTON_R::functionPrime1(double y)
{
	rootprime = 3 * pow(y, 2.0);
	return rootprime;
}

double NEWTON_R::functionPrime2(double y)
{
	rootprime = 3 + cos(y) - exp(y);
	return rootprime;
}

double NEWTON_R::select_function(int s, double y)
{
	NO_equation = s;
	value_of_x = y;
	if (s == 1)
	{
		root= function1(y);
		return root;
	}
	else if (s == 2)
	{
		root= function2(y);
		return root;
	}
}

double NEWTON_R::select_functionprime()
{
	if (NO_equation == 1)
	{
		rootprime= functionPrime1(value_of_x);
		return rootprime;

	}
	else if (NO_equation == 2)
	{
		rootprime= functionPrime2(value_of_x);
		return rootprime;
	}
}

void NEWTON_R::Evaluate(int s, double y,double e)
{
	cout.precision(5);
	cout.setf(ios::fixed);
	x1 = y;
	x = select_function(s,x1);
	fx1 = select_functionprime();
	cout << "x{i}" << "    " << "x{i+1}" << "        " << "|x{i+1}-x{i}|" << endl;
	do
	{
		x = x1;
		fx = select_function(s,x1);  
		fx1 = select_functionprime();
		x1 = x - (fx / fx1); 
		cout << x << "     " << x1 << "           " << abs(x1 - x) << endl;
	} while (fabs(x1 - x) >= e);    
	cout << "The root of the equation is " << x1 << endl;
}

NEWTON_R::~NEWTON_R()
{
	cout << "\t\t\t\tend of program\n";
}


