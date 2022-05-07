#include "BISECTION.h"
#include<cmath>
#include<iomanip>
BISECTION::BISECTION()
{
	a = 0.0;
	b = 0.0;
	c = 0.0;
	e = 0.0;
	fa = 0.0;
	fb = 0.0;
	fc = 0.0;
	root = 0.0;
}


double BISECTION::function1(double x)
{
	root = x * x - 4.0;
	return root;
}

double BISECTION::function2(double x)
{
	root = 3 * x + sin(x) - exp(x);
	return root;
}

double BISECTION::select_function(int NO_equation,double x)
{
	if (NO_equation == 1)
	{
		return function1(x);
	}
	else if (NO_equation == 2)
	{
		return function2(x);
	}
}
bool BISECTION::Evaluate(int s,double a, double b, double e)
{
	bool flag = true;
	cout.precision(5);  
	cout.setf(ios::fixed);
	if (select_function(s, a) * (select_function(s, b)) > 0)
	{
		cout << "Please enter a different intial points: \n";
		flag = false;
		return flag;
	}
	else
	{
		cout << "a" <<setw(18)<< "b" <<setw(18)<< "c" <<setw(18)<< "fc" << "\n";
		while (fabs(a - b) >= e) 
		{
			c = (a + b) / 2.0;       
			fa = select_function(s,a);
			fb = select_function(s, b);
			fc = select_function(s, c);
			cout <<a<<setw(18)<<b<<setw(18)<<c<<setw(18)<<fc<< "\n";
			if (fc == 0) 
			{
				cout << "The root of the equation is " << c;
				break;
			}
			if (fa * fc > 0)    
			{
				a = c; 
			}
			else if (fa * fc < 0)
			{
				b = c;  
			}
		}
	}  
	cout << "The root of the equation is " << c<<"\n";
	}
BISECTION::~BISECTION()
{
	cout << "\t\t\t\tend of program\n";
}
