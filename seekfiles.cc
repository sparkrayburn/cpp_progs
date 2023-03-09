#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    string username, password; 
    // user input 
    cout << "Enter username: "; 
    cin >> username;

    cout << "Enter password: "; 
    cin >> password;

    // open the excel file 
    fstream userData("userData.csv", ios::in);

    
    userData.seekg(8, ios::beg);

    // check if the username already exists
    while (userData.get() != EOF)
    {

       
        char ch = userData.get();


        if (ch == username[0])
        {

            cout << endl
                 << "This username has already been taken." << endl;

            return 0;
        }
    }

    

    fstream userData1("userData.csv", ios::out | ios::app);

    

    userData1 << "\n"
              << username << "\t" << password;

    

    userData.close();

    userData1.close();

    

    cout << endl
         << "User data saved successfully!" << endl;

    return 0;
}