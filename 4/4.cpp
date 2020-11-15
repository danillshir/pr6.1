#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(0, "");
    int a[10];
    int i;
    int min;
    int n = 0;
    srand(time(0));
    for (i = 0; i < 10; i++)
    {
        a[i] = rand() % 30;
        cout << a[i] << " ";
    }
    cout << "\n";
    min = a[0];
    for (i = 1; i < 10; i++)
    {
        if (min > a[i])
        {
            min=a[i];
            n = i + 1;
        }
    }
    cout << "a[" << n-1 << "]="<< min << " - минимальный элемент" << endl;
    system("pause");
}