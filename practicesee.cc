#include <iostream>
using namespace std;


template <class bms, class loly>
void swap(bms a, loly c)
{

 loly temp;
 temp = a;
 a = c;
 c=temp;


 cout << "The numbers after swapping are \t" << "a = "<< a << endl;
 cout << "The numbers after swapping are \t" << "c = "<< c << endl;


}




int main()
{
  system ("cls");

  cout << "program to check the comaprity\nbetween two numbers of any data type \n" << endl;

    swap( 47, 58.7);
    cout << "____________";
    cout << "\n\n\n";

return 0;
}