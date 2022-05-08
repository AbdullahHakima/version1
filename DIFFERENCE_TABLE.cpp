#include "DIFFERENCE_TABLE.h"
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
DIFFERENCE_TABLE::DIFFERENCE_TABLE(int NO_VALUE)
{
	x = new double[NO_VALUE];
	n = NO_VALUE;
	k = 0;
	y = new double* [NO_VALUE];
	for (int i = 0; i < NO_VALUE; i++)
	{
		y[i] = new double[NO_VALUE];
	}
}

void DIFFERENCE_TABLE::set_valueX()
{
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
}

void DIFFERENCE_TABLE::set_valueY()
{
	for (int i = 0; i < n; i++)
	{
		cin >> y[i][0];
	}
}

void DIFFERENCE_TABLE::EvaluateTableforward()
{
	cout.precision(5);
	cout.setf(ios::fixed);
	for (int j = 1; j < n; j++)
	{
		for (int i = 0; i < n - j; i++)
		{

			y[i][j] = y[i + 1][j - 1] - y[i][j - 1];

		}
	}

	cout << "\n The Forward Difference Table is as follows: \n\n";

	cout << "x" << setw(10) << "y" << setw(10);

	for (int i = 1; i < n; i++)

		cout << "y" << i << setw(10);

	cout << "\n-----------------------------------------------------------------------\n";

	k = n;

	for (int i = 0; i < n; i++)

	{

		cout << x[i] << setw(10);

		for (int j = 0; j < k; j++)

		{

			cout << y[i][j];

			cout << setw(10);

		}

		cout << "\n";

		k--;

	}
}

void DIFFERENCE_TABLE::EvaluateTableBackward()
{
	cout.precision(2);
	cout.setf(ios::fixed);
	for (int j = 1; j < n; j++)

	{

		k++;

		for (int i = k; i < n; i++)

		{

			y[i][j] = y[i][j - 1] - y[i - 1][j - 1];

		}

	}

	cout << "\n The Backward Difference Table is as follows: \n\n";

	cout << "x" << setw(10) << "y" << setw(10);

	for (int i = 1; i < n; i++)

		cout << "y" << i << setw(10);

	cout << "\n-----------------------------------------------------------------------\n";

	for (int i = 0; i < n; i++)

	{

		cout << x[i] << setw(10);

		for (int j = 0; j <= i; j++)

		{

			cout << y[i][j];

			cout << setw(10);

		}

		cout << "\n";

	}
}
