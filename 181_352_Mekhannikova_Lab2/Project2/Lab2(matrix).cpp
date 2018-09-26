//произведение матрицы на матрицу
#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	int aMatrix[3][3] = { {10, 11, 12},
						{13, 14, 15},
						{16, 17, 18} };

	int bMatrix[3][3] = { {20, 21, 22},
						{23, 24, 25},
						{26, 27, 28} };

	int cResult[3][3] = { {0,0,0}, {0,0,0}, {0,0,0} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int c = 0; c < 3; c++)
			{
				cResult[i][j] += aMatrix[i][c] * bMatrix[c][j];
			}
			std::cout << cResult[i][j] << "\t";
		}
		std::cout << "\n";
	}
	getchar();
	return 0;
}
//произведение матрицы на вектор
#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	int Vector[i], sum, MatrixC[i], a;
for (int i = 0; i < 3; i++) 
{
	std::cout << Vector[i] << std::endl;
}

for (int i = 0; i < 3; i++) 
{

	for (int k = 0; k < 3; k++) 
	{
		a = Vector[i] * MatrixC[i][k];
		sum = sum + a;
	}
	
	Vector[i] = sum;
	sum = 0;
	std::cout << Vector[i] << std::endl;
}
getchar();
return 0;
}

//поэлементное произведение матриц
#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{

	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr3[10] = { 0,0,0,0,0,0,0,0,0,0 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr1[i] << " * ";

		std::cout << arr2[i] << " = ";

		arr3[i] = arr1[i] * arr2[i];
		std::cout << arr3[i] << std::endl;

	}
	getchar();
	return 0;
}