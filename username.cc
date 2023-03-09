
#include <iostream>
#include <fstream>
#include <string>
    using namespace std;

int main()
{
    system("cls");
    string username, password; 
    string checkUsername;      
   
    cout << "Enter username: "; 
    cin >> username;



    
    fstream userData("userData.txt", ios::in);

    
    while (userData >> checkUsername)
    {

    
        if (checkUsername == username)
        {

            cout << endl << "This username has already been taken." << endl;
            return 0;
        }
    }

    cout << "Enter password: "; 
    cin >> password;
    
    fstream userData1("userData.txt", ios::out | ios::app);

    
    userData1 << "\n" << username << "\t" << password;

    
    userData.close();

    userData1.close();

    cout << endl << "User data saved successfully!" << endl;

    return 0;
}