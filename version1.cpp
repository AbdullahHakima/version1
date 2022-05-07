#include<iostream>
#include"BISECTION.h"
#include"NEWTON_R.h"
#include"EULER.h"
using namespace std;
double a, b,e,value;
void menu()
{
	int select;
	cout << "\t\t\tNUMERICAL ANALYSIS\n "
		<<"\nPlease select one method of theas :"
		<<"\n 1)BISECTION \n "
		<<"2)NEWTON-RAPHSON \n "
		<<"3)DIFFERENCE-TABLE \n "
		<<"4)EULER \n";
	cin >> select;
	BISECTION v;
	NEWTON_R v2;
	EULER v3;
	switch (select)
	{
	case 1:
		cout << "choose one of available equations :-\n";
		cout << " (1) f(x)=x^2-4\n (2) f(x)=3x+sinx-e^x\n";
		cin >> select;
		cout << "Enter the initial value for points a and b:-\n";
		a:cin >> a >> b;
		cout << "Enter the degree of accuracy desired\n";
		cin >> e;
		if (v.Evaluate(select, a, b, e) == false)
		{
			goto a;
		}
		break;
	case 2:
		cout << "choose one of available equations :-\n";
		cout << " (1) f(x)=x^3-8\n (2) f(x)=3x+sinx-e^x\n";
		cin >> select;
		cout << "Enter the initial point value :-\n ";
		cin >> a;
		cout << "Enter the degree of accuracy desired\n";
		cin >> e;
		v2.Evaluate(select, a, e);
		break;
	case 3:
		cout << "choose one of available rule:-\n";
		cout << " 1) forward\t\t2)backward";

		break;
	case 4:
		cout << "choose one of available differential equations :-\n";
		cout << " (1) dy/dx=-2x-y\n (2) dy/dx=x+y\n";
		cin >> select;
		cout << "Enter the initial value for X and Y respectively:-\n";
		cin >> a >> b;
		cout << "For what value of X do you want to find the value of Y:\n";
		cin >> value;
		cout << "Enter the width of the sub-interval:\n";
		cin >> e;
		v3.evaluate(select, a, b, value, e);
		break;
	}


}
int main()
{
	menu();

	return 0;
}