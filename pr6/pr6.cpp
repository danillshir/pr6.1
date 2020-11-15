#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int m[10];
	cout << "Введите 10 элементов массива: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> m[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]=" << m[i] << "\n";
	}
	system("pause");
}
