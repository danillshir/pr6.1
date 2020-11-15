#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(0, "");
    int a[10];
    int i;
    srand(time(0)); 
    for (i = 0; i < 10; i++)
    {
        a[i] = rand() % 41 - 20;
        cout << a[i] << " ";
    }
    cout << "\n";
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0)
        {
            a[i] = 0;
        }
        cout << a[i] << " ";
    }
    system("pause");
}