#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;

double func(double x)
{
	//return x*x*x - x*x + 2;
	return x*x - 3*x +2;
}


double derivFunc(double x)
{
//	return 3*x*x - 2*x;
	return 2*x - 3;
}


void newtonRaphson(double x)
{
	double h = func(x) / derivFunc(x);
	while (abs(h) >= EPSILON)
	{
		h = func(x)/derivFunc(x);

		// x(i+1) = x(i) - f(x) / f'(x)
		x = x - h;
	}

	cout << "The root is : " << x;
}

int main()
{
	//double x0 = -20;
	double x0 = 0;
	newtonRaphson(x0);
	return 0;
}

