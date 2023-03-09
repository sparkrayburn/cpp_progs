// Develop an app for electricity usage charge calculation: Read the number of units from the
// user. Charges are as follows: Minimum charge : Rs100, Upto 50 units Rs.2 per unit, 51-100 units
// Rs.3 per unit, 100-200 units Rs. 5 per unit &gt;200 units Rs 10 per unit with a warning message that
// electricity consumption is HIGH-




#include <iostream>
using namespace std;


int main()
{
  system ("cls");
  int charge = 100;
  int units;

  cout << "Enter units" << endl;
  cin >> units;

  if (units <= 50)
  {
    charge = units*2 + charge; 
       
  }
if (units >50 && units <=100 )
{
    
    charge = (units-(units-50))*2 + charge + (units-50)*3; 
   }

if (units >100 && units <=200 )
{
    
    charge = (units-(units-50))*2 + charge +(units - 100)*5+ 
    (units-(units-50))*3; 
   }
if (units >200  )
{
     charge = (units-200)*10+(units-(units-50))*2 + 
     charge +(units-(units-100))*5+ (units-(units-50))*3; 
 
   
   }

cout << charge << endl;




return 0;
}