//arithmetic + pointer
#include <iostream>
using namespace std;

int* depend(int* a, int* b)
{
    *a = *a + *b;

    return a;
}

int depend2(int* a, int* b)
{
    *a = *a + *b;

    return *a;
}
int main()
{
    setlocale(LC_ALL, "rus");

    int a = 10;
    int* pa = &a;

    int b = 20;
    int* pb = &b;

    cout << depend(pa, pb) << endl;
    cout << depend2(pa, pb) << endl;
}