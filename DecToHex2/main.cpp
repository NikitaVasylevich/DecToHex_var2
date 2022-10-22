#include <iostream>
#include <string>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int j,p = 0;
	int c = 0;
	cout << "Введите десятичное число: ";	cin >> j;
	const int n = 10;
	int arr[n] = {};

	for (int i = 0; j >= 16; i++)
	{
		arr[i] = j % 16;
		j = j / 16;
		c = c++;
	}
	arr[c] = j;
	cout << "Шестнадцатеричное значение данного числа: ";
	int ar2[10] = {};                           //Введение вспомогательного массива
	string ar3[6] = { "A","B","C","D","E","F"}; //Введение вспомогательного массива
	for (int i = 0; i <= c; i++)
	{
		ar2[i] = arr[c - i];
		if (ar2[i] <= 9)
		{
			cout << ar2[i];
		}
		else
		{
			p = ar2[i] - 10;
			cout << ar3[p];
		}
	}
	cout << endl;
}