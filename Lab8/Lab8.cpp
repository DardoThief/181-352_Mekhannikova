#include <iostream>
#include <string>
#include "stdafx.h"
using namespace std;

class matr
{
private:
	double * data;
	unsigned int n, m;
public:
	matr();
	matr(unsigned int n, unsigned int m);
	matr(double *, unsigned int n, unsigned int m);

	void mul(double*, unsigned int n, unsigned int m);
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				data[2][2] += 
		}
	}
	void emul();
	void sum();
	void print();
};