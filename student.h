#include <iostream>
#include <conio.h>
using namespace std;
class student
{
    char *name;
    int usn;
    float cgpa;
    int marks[3][2] = {0};

public:
    void read_data();
    void display();
}; 


void student::read_data()
{
    cout << "Enter your usn";
    cin >> usn;
    cout << "  Enter the Student Name:";
    cin >> name;
    cout << "  Enter the marks in three subjects:n";
    cin >> cgpa;
    for (int sub = 0; sub < 3; sub++)
    {

        for (int cie = 0; cie < 3; cie++)
        {
            cin >> marks[sub][cie];
        }
    }
}

void student::display()
{
    cout << " ------------------------------------------------------";
    cout << name ;
    cout << " ------------------------------------------------------";
    cout << "  USN no is " << usn;
    cout << "  Name is " << name;
    cout << " CGPA " << cgpa;
    cout << "------------------------------------------------------";
}
