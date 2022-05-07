#include<iostream>
using namespace std;
class BISECTION
{
private:
	double root,a, b, c, e, fa, fb, fc;
public:
	BISECTION();
	double function1(double X);
	double function2(double X);
	double select_function(int s,double x);
	bool Evaluate(int s,double a, double b, double e);
	~BISECTION();


};

