#include <iostream>
#include <string>
#include "stdafx.h"
using namespace std;

class matr
{
private:
	double ** data;
	unsigned int n, m;
public:
	matr();
	matr(unsigned int n, unsigned int m);
	matr(double ** pdata, unsigned int n, unsigned int m);

	void mul(double**pdata, unsigned int n, unsigned int m);
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				data[n][m] += 
		}
	}
	void emul();
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				this->data[][] *= pdata[][]
		}
	}
	void sum();
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				this->data[][] += pdata[][]
		}
	}
	void print();
};
