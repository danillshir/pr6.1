#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(0, "");
    int a[10];
    int i;
    int b=0;
    int sum=0;
    srand(time(0));
    for (i = 0; i < 10; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
        b=a[i];
        sum += b;
    }
    cout << "\n";
    cout << sum << endl;
    system("pause");
}