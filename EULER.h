#pragma once
class EULER
{
private:
	double x0, y0, h, x,sum,y;
public:
	EULER();
	~EULER();
	double function1(double a, double b);
	double function2(double a, double b);
	double select_function(int s, double a, double b);
	void evaluate(int s,double ,double,double,double);
};

