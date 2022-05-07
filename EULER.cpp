#include "EULER.h"
#include<iostream>
#include<iomanip>
using namespace std;
double EULER::function2(double a, double b)
{
    sum = a + b;
    return sum;
}

double EULER::select_function(int s, double a, double b)
{
    if (s == 1)
    {
        return function1(a, b);
    }
    else if (s == 2)
    {
        return function2(a, b);
    }
}

void EULER::evaluate(int s,double a,double b,double v,double e)
{
    cout.precision(5);
    cout.setf(ios::fixed);
    x0 = a;
    y0 = b;
    x = v;
    h = e;
    cout << "x" << setw(19) << "y" << setw(19) << "dy/dx" << setw(16) << "y_new\n";

    cout << "----------------------------------------------------------\n";

    while (fabs(x - x0) > 0.0000001)
    {

        y = y0 + (h * select_function(s,x0, y0));

        cout << x0 << setw(16) << y0 << setw(16) << select_function(s,x0,y0) << setw(16) << y << endl;

        y0 = y;

        x0 = x0 + h;

    }

    cout << x0 << setw(16) << y << endl;

    cout << "The approximate value of y at x=0 is " << y << endl;
}

EULER::EULER()
{
    x0 = 0.0;
    y0 = 0.0;
    h = 0.0;
    x = 0.0;
    sum = 0.0;
    y = 0.0;
}

EULER::~EULER()
{
    cout << "\t\t\t\tend of program\n";
}

double EULER::function1(double a, double b)
{
    sum = -2 * a - b;
    return sum;
}
