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

	int cResult[3][3] = {0};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int c = 0; c < 3; c++)
			{
				cResult[i][j] += aMatrix[i][c] * bMatrix[c][i];
			}
			std::cout << cResult[i][j] << "\t";
		}
		std::cout << "\n";
	}
	getchar();
	return 0;

//произведение матрицы на вектор


	int Vector[3], sum, MatrixC[3][3], a;
	for (int i = 0; i < 3; i++) 
	{
		std::cout << Vector[3] << std::endl;
	}

	for (int i = 0; i < 3; i++) 
	{
		for (int k = 0; k < 3; k++) 
		{
			a = Vector[3] * MatrixC[3][3];
			sum = sum + a;
		}
		Vector[3] = sum;
		sum = 0;
		std::cout << Vector[3] << std::endl;
	}
	getchar();
	return 0;


//поэлементное произведение матриц
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr3[10] = {0};

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr1[10] << " * ";

		std::cout << arr2[10] << " = ";

		arr3[10] = arr1[10] * arr2[10];
		std::cout << arr3[10] << std::endl;

	}
	getchar();
	return 0;


//скалярное произведение векторов
	int Vector1[3], Vector2[3], res, n;
	{
	for (int i = 0; i < n; i++)
		{
			res = Vector1[3] * Vector2[3];
		}
		std::cout << res << std::endl;
	}
	getchar();
	return 0;
}