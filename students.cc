#include <iostream>
#include "student.h"
using namespace std;
int main()
{
    system ("cls");
    
    student s[10];
    int n, i;
    
    cout << " Enter the number of Students:";
    cin >> n;
    for (i = 0; i < n; i++)
        s[i].read_data();
    for (i = 0; i < n; i++)
        s[i].display();
    getch();
}