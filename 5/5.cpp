#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    int a[10];
    int i;
    srand(time(0));
    for (i = 0; i < 10; i++)
    {
        a[i] = rand() % 30;
        cout << a[i] << " ";
    }
    cout << "\n" << endl;
    int min = 0, max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < a[min])
            min = i;

        if (a[i] > a[max])
            max = i;
    }

    int tmp = a[max];
    a[max] = a[min];
    a[min] = tmp;


    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    system("pause");
}