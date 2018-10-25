/*
1. ДИНАМИЧЕСКАЯ ПАМЯТЬ
Стековая память ограничена, при неправильном использовании
стек переполняется (stack overlow)
int b[1000][1000] = {0}; - переполнение стека

операционной системой для приложения может быть выделена
особая память, которая называется динамической
она ограничена лишь ресурсами ПК

2. СИНТАКСИС
динамическая ОП выделяется с помощью оператора new
работа с данными в динамической ОП ведётся через указатели
тип_данных * имя_переменной = new тип_данных;
double * var_dbl = new double;

3. УТЕЧКА И ПЕРЕПОЛНЕНИЕ ПАМЯТИ
каждую выделенную порцию ДП ОС закрепляет за приложением
если от неё "потеряется" указатель, объем ДП всё равно остаётся за приложением
потенциально, при неправильном использовании памяти, приложение может захватить
всю ОП
Указатель на кажду. выделенную порцию ДП необходимо хранить
пока она используется, а затем применить оператор delete для открепления 
порции ДП:
delete var_dbl;
*/

#include <iostream>
#include "stdafx.h" //данный файл, а также в аналогичный pch.h собираются заголовки,
//которые не меняются или меняются редко, поэтому собранные в данный заголовок
//файлы компилятор обрабатывает лишь однажды и создаёт заготовку,
//предварительно откомпилированный заголовок в машинном коде
/* для отключения 1) в настройках проекта в разделе С++, в подразделе
"Предварительные скомпелированные заголовки" проставить опцию "Не использовать"
2) (опционально) убрать stdfax.h и pch.h из файлов кода
3) исключить файл из дерева проектов
*/
using namespace std;

void fnc1()
{
	int b[1000][1000] = { 0 };
	b[1][1] = 0;
	cout << "Stack overlow" << endl;
	return;
}
int main()
//вызов утечки памяти
{
	for (int i = 0; i < 100000000; i++)
	{
		long long * b = new long long;
		(*b) = 1;
		delete b;
	}
}
/*4. ВЫДЕЛЕНИЕ МАССИВОВ В ДИНАМИЧЕСКОЙ ПАМЯТИ
Сразу выделить блок памяти под все элементы массива нельзя 
под каждую размерность многомерного массива выделяется по одномерному массиву
Например, если необходимо выделить двухмерный массив, сначала создаётсвя
одномерный, содержащий указатели на каждую строку, а затем создаются строки
С многомерными аналогично, только вложенности больше
Иными словами, в ОП создаётся структура, связывающая отдельно выделенные строки 
в массив нужной размерности
Удаляются массивы также построчно с помощью оператора delete[](скобки пустые)
Начать удалять необходимо с самой младшей размерности

1D массив
тип_данных * имя = new тип_данных[размер];

2D массив
тип_данных ** имя = new * тип_данных[размер1];
for(int i; i < размер1; i++) {имя[i] = new тип_данных[размер2]}
for(int i; i < размер1; i++) {delete[] имя[i];}
delete имя[i]

3D массив
тип_данных *** имя = new ** тип_данных[размер1];
for(int i; i < размер1; i++) 
{
	имя[i] = new * тип_данных[размер2]
	for (int j; j < размер2; j++)
		{
			имя[i][j] = new тип_данных[размер3]
		}
}

for(int i; i < размер1; i++)
{
	for (int j; j < размер2; j++)
	{
		delete[] имя[i][j];
	}
	delete[] имя[i];
}
delete[] имя
*/