#include "vecsim.h"
#include <math.h>
#include <iostream>

using namespace std;

vecsim::vecsim(double* v1, double* v2, int len)
{
	vec1 = v1;
	vec2 = v2;
	vec_len = len;
}

double vecsim::Euclidean()
{
	if (!vec1 || !vec2 || vec_len <= 0)
	{
		cout << "Invalid vector" << endl;
	}
	double eucdis = 0.0;
	for (int i = 0; i < vec_len; i++)
	{
		eucdis += pow(vec1[i] - vec2[i],2);
	}
	return sqrt(eucdis);
}

double vecsim::Cosine()
{
	double dotproduct=0.0;
	
	double total_x = 0.0;
	double total_y = 0.0;
	
	for (int i = 0; i < vec_len; i++)
	{
		dotproduct += (vec1[i] * vec2[i]);
	}
	
	for (int i = 0; i < vec_len; i++)
	{
		total_x += pow(vec1[i],2);
		total_y += pow(vec2[i],2);
	}

	return dotproduct / (sqrt(total_x) * sqrt(total_y));
}

vecsim::~vecsim()
{
	delete vec1;
	delete vec2;
}

