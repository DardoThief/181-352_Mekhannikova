#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
// for - �������� ����� � ��������
//
//for(��������_����������; �������_�����������; �����������_��������)
//{
// ��������, �����������, ���� (�������_����������� == true)
//}
// while(�������) - �������� ����������� �� ��� ���, ���� ������� == true
//{ // ������� ����������� ����� ������ ������� � ����

//}
// while - ���� � ���� - ��������, �.�.������� ����������� �������, ����� ����������� ��������

// do-while - ���� � ������������
// do
//{

//}
/*
continue; // ������� �� ��������� ��������

break; // ����� �� �����
*/
{
for (;;)
{
	if (k >= 10)
	{
		break;
	}
	std::cout << "arr[k] = " << arr[k] << std::endl;
	k++;
}
// ����� �������� ����� �������
for (int i = 0, j = 5; // ����� "," ����� ����������� ������� ������ ����������
	i + j < 10, j < 10; // ???
	i++, j = j + 2, std::cout << "i=" << i << '\t' << "j = " << j << std::endl) // ����� "," ����� ����������� ������� ������ ����������
{
	// ��������, �����������, ���� i + j < 10
}
// ��������� �������� (����������� ������)
// (���_���) ? (��������� ���� true) : (��������� ���� false)
// ������������ ������ ������ if

(d == 0) ?
(std::cout << "d == 0" << std::endl) :
	(
	(d > 0) ?
		(std::cout << "d > 0" << std::endl) :
		(std::cout << "d < 0" << std::endl)
		);

/*
�������� �� ��, ��� ����������� �� ���������� ������� ����� ������������ � �����������, 
��� �� ����� �����������: ���������� ��� ������� ������ �����������, ����� ������ 
���������� � ����� �� ��������
� ������������� �� ���� ��� ������������ ����������� ����� ������������ � ���� 
*/

class vehicle
{
public:
		vehicle(/*����� ���� ������� ���������*/)//�����������
		{
			cout << "constructor vehicle" << endl;
			return;
		}

		~vehicle(/*�� ����� ���� ������� ���������!*/) //����������
		{
			cout << "~constructor of vehicle" << endl;
		return;
		}
};

//������������� � ������������ ������������� ����������� �������,
//������� �� �� ���, ��� � ����� (���������� � "~")

//����������� ������ ���� public

//����������� �� ����� ���������� ���������, �� ����� ����� ������� ���������
//���������� �� ����� ����� �� �������, �� ��������

/*
5. ���������
// �������� �� ��, ��� � ���������� ��������� ��� ������� ������ ������ ������,
// �� ����� ���� ��� �� �� �����, ��� � �����. ������������ ������� - ���� ��
// ��������� public

struct some_structure {

}
*/
/*6. ����������� ������� ������� ������
� ���������� ������ ������� ���������� (���������) ������
���� (����������) ������ ����������� ������ ������ � ������ ���������
� ��������� ���������� ����������� "���_������::"

bool vehicle::check_regnumber()
*/

