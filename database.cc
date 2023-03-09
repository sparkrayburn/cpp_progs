#include <iostream>
using namespace std;



class Student
{
    char* usn;
    
    float marks;

    



    public:
    void take_data()
    {
        cout << "What is your usn";
        cin >> usn;
        cout << "Enter your marks";
        cin >> marks;
    }


    void display()
    {
        cout << usn;
        cout << marks;
    }
};


int main()
{
  system ("cls");
  Student s1;
  s1.take_data();
  s1.display();



return 0;
}