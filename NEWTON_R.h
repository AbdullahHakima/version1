#include<iostream>
using namespace std;
class NEWTON_R
{
private:
	double x, x1,fx, fx1,root,rootprime,value_of_x;
	int NO_equation = 0;
public:
	NEWTON_R();
	double function1(double y);
	double function2(double y);
	double functionPrime1(double y);
	double functionPrime2(double y);
	double select_function(int s, double y);
	double select_functionprime();
	void Evaluate(int , double ,double );
	~NEWTON_R();

};