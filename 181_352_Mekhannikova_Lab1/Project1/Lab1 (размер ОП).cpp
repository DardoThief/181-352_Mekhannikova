#include <iostream> //библиотека потокового ввода-вывода
#include <string> //шаблонный класс
#include <cstdio>

int main()//точка старта
{
	long long int a = 260;//присвоение переменной значения 260
	std::cout << "a^4=" << a * a*a*a << std::endl;//вывод значения переменной в 4 степени
	std::cout << "a^4*a^4=" << a * a*a*a*a*a*a*a << std::endl;//вывод значения переменной в 8 степени
	std::cout << "a+53=" << 'a' + 53 << std::endl;//вывод значения сложения символа и числа
	std::cout << "37+a=" << 37 + 'a' << std::endl;//вывод значения сложения числа и символа
	std::cout << "Data body lenght double = " << sizeof(double) << "байт" << std::endl;//вывод длины тела данных double в байтах
	std::cout << "Data body lenght int = " << sizeof(int) << "байт" << std::endl;//вывод данных тела данных int в байтах
	std::cout << "Data body lenght bool = " << sizeof(bool) << "байт" << std::endl;//вывод длины тела данных bool в байтах
	std::cout << "Data body lenght char = " << sizeof(char) << "байт" << std::endl;//вывод длины тела данных char в байтах

	getchar();//функция ожидания ввода 1 любого символа
	return 0;//завершение работы приложения
}