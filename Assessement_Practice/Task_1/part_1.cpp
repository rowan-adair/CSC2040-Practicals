

#include "part_1.h"
#include <iostream>

using namespace std;

double get_mid(int a, int b, int c)
{
	// Checking for b 
	if ((a < b && b < c) || (c < b && b < a))
		return b;
	// Checking for a 
	else if ((b < a && a < c) || (c < a && a < b))
		return a;
	// Must be c
	else
		return c;
}

void reverse(double& u, double& v, double& x, double& y)
{
	double arr[4] = { y,x,v,u };
	
	u = arr[0];
	v = arr[1];
	x = arr[2];
	y = arr[3];

}
