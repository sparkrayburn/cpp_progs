#include <iostream>
using namespace std;
#include <string>

int main()
{
    system ("cls");
    string user;
    char space;
    space = '.';
    int i;
    cout << "Enter a string" << endl;
    getline(cin, user);
    int n = user.length();

    user[0] = toupper(user[0]);
    for(i = 0; i< n;i++)
    {
        if (user[i] == space)
        
    
            user[i+1] = toupper(user[i+1]);
        

    }
    cout << user;


return 0;
}