#include <iostream> //библиотека потокового ввода-вывода
#include <string> //шаблонный класс
#include "pch.h"
#include "stdafx.h"
using namespace std;

int main()//точка старта
{
	long long int a = 260;//присвоение переменной значения 260
	cout << "a^4=" << a * a*a*a << endl;//вывод значения переменной в 4 степени
	cout << "a^4*a^4=" << a * a*a*a*a*a*a*a << endl;//вывод значения переменной в 8 степени
	cout << "a+53=" << 'a' + 53 << endl;//вывод значения сложения символа и числа
	cout << "37+a=" << 37 + 'a' << endl;//вывод значения сложения числа и символа
	cout << "Data body lenght double = " << sizeof(double) << "байт" << endl;//вывод длины тела данных double в байтах
	cout << "Data body lenght int = " << sizeof(int) << "байт" << endl;//вывод данных тела данных int в байтах
	cout << "Data body lenght bool = " << sizeof(bool) << "байт" << endl;//вывод длины тела данных bool в байтах
	cout << "Data body lenght char = " << sizeof(char) << "байт" << endl;//вывод длины тела данных char в байтах

	getchar();//функция ожидания ввода 1 любого символа
	return 0;//завершение работы приложения
}