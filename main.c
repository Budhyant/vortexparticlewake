#include "iostream"
#include "particle.h"
#include "stdlib.h"

double* randomvector(double magnitude);

int main()
{
	int N = 4;
	Particle P[N];
//	P.print_all();
	srand((unsigned)time(NULL));
	for (int i = 0 ; i<N ; i++ )
	{
		P[i].set_position(randomvector(1.0));
		P[i].set_vorticity(randomvector(10.0));
		P[i].print_all();
	}
	return 0;
}

double* randomvector(double magnitude)
{
	static double result[3];
	for (int i = 0 ; i<3 ; i++)
	{
		result[i] = magnitude*rand()/RAND_MAX;
	}
	return result;
}
