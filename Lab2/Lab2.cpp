#include <iostream>
#include <string>

using namespace std;

int main()
{
	int aMatrix[3][3] = { {10, 11, 12},
						{13, 14, 15},
						{16, 17, 18} };

	int bMatrix[3][3] = { {20, 21, 22},
						{23, 24, 25},
						{26, 27, 28} };

	int cResult[3][3] = { 0 };

	//произведение марицы на матрицу
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int c = 0; c < 3; c++)
			{
				cResult[i][j] += aMatrix[i][c] * bMatrix[c][j];
			}
			cout << cResult[i][j] << "\t";
		}
		cout << "\n";
		
	};
cout << "\n";
	//произведение матрицы на вектор
	int Vector[3] = { 3, 2, 3 };
	int sum = 0;
	int MatrixC[3][3] = { { 3, 3, 3 },
						{ 2, 2, 2 },
						{ 1, 1, 1 } };

	for (int i = 0; i < 3; i++)
		{
			for (int k = 0; k < 3; k++)
			{
				sum += Vector[i] * MatrixC[i][k];
			}
		cout << sum << "\t";
		};
	cout << "\n";
	cout << "\n";

	//поэлементное произведение матриц
	int cMatrix[2][2] = { { 1, 4 },{ 2, 5 } };
	int dMatrix[2][2] = { { 7, 8 },{ 10, 11} };
	int product[2][2] = { 0 };

	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 2; col++)
		{
			product[row][col] = cMatrix[row][col] * dMatrix[row][col];
			cout << product[row][col] << "\t";
		}
		cout << "\n";
	};
	cout << "\n";

	//скалярное произведение векторов
	int Vector1[3] = { 1, 2, 3 }; 
	int Vector2[3] = { 2, 3, 4 };
	int res = 0;

		for (int i = 0; i < 3; i++)
		{
			res += Vector1[i] * Vector2[i];
		}
		cout << res << endl;
	getchar();
	return 0;
}