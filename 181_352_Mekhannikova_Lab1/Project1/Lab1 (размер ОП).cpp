#include <iostream> //���������� ���������� �����-������
#include <string> //��������� �����
#include <cstdio>

int main()//����� ������
{
	long long int a = 260;//���������� ���������� �������� 260
	std::cout << "a^4=" << a * a*a*a << std::endl;//����� �������� ���������� � 4 �������
	std::cout << "a^4*a^4=" << a * a*a*a*a*a*a*a << std::endl;//����� �������� ���������� � 8 �������
	std::cout << "a+53=" << 'a' + 53 << std::endl;//����� �������� �������� ������� � �����
	std::cout << "37+a=" << 37 + 'a' << std::endl;//����� �������� �������� ����� � �������
	std::cout << "Data body lenght double = " << sizeof(double) << "����" << std::endl;//����� ����� ���� ������ double � ������
	std::cout << "Data body lenght int = " << sizeof(int) << "����" << std::endl;//����� ������ ���� ������ int � ������
	std::cout << "Data body lenght bool = " << sizeof(bool) << "����" << std::endl;//����� ����� ���� ������ bool � ������
	std::cout << "Data body lenght char = " << sizeof(char) << "����" << std::endl;//����� ����� ���� ������ char � ������

	getchar();//������� �������� ����� 1 ������ �������
	return 0;//���������� ������ ����������
}