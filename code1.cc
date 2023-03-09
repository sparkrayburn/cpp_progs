#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    system("cls");
    int *ptr1;
    long int *ptr3;
    float *ptr2;
    int n;
    float m;
    long int p;
    ptr1 = &n;
    ptr2 = &m;
    ptr3 = &p;
    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr3 << endl;

    ptr1++, ptr2++, ptr3++;

    cout << endl;

    cout << ptr1 << endl;
    cout << ptr2 << endl;
    cout << ptr3 << endl;
    cout << endl;
    cout << ptr1 << endl;
    cout << ptr1++ << endl;
    ptr1++;
    cout << ptr1;
}