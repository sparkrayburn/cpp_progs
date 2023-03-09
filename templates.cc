#include <iostream>
using namespace std;


template <class bms, class lol>
void compare(bms a, lol y)
{
  try
  {
    if (a > y)
    throw 0;
    else
    cout << "y is bigger";
  }
  
  catch (int x)
  {
    cout << "sorry";
  }
  
}



int main()
{
  system ("cls");

  compare(20, 10.1);
  



return 0;
}