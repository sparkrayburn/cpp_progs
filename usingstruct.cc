#include <iostream>
using namespace std;
#include "structstudent.h"


int main()
{
    system ("cls");
    student s[60]; // creating an array of structures which takes in 60 student names
    for (int i = 0; i < 60; i++)
    {
        cout << "Enter information," << endl;
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter USN number: ";
        cin >> s[i].USN;
        // to take in marks of 3 subject with 3 cies

        for (int sub = 0; sub < 3; sub++)
        {
            
            
            for (int cie = 0;cie < 3; cie++)
            {
                cin >> s[i].marks[sub][cie];
            }
            
        }
        
        
    }
    
 // displaying the student information 
    for ( int i = 0; i < 60; i++)
    {
        cout << "\nDisplaying Information," << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "USN: " << s[i].USN << endl;
        for (int sub = 0; sub < 3; sub++)
        {

            for (int cie = 0; cie < 3; cie++)
            {
                cout <<  s[i].marks[sub][cie] << "\t";
            }
        }
    }
    
   
    return 0;
}
