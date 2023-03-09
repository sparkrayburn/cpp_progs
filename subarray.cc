#include <iostream>
using namespace std;


int main()
{
  system ("cls");
  int array[] = {1,2,3,4,5};
  int i,j , k;
  int sum = 0 ;
for ( i = 0; i < 5; i++)
{
    for ( j = i; j < 5; j++)
    {
        for(k=i;k<=j;k++)
        {
           // sum += array[k];
            cout << array[k] << " ";

     
        }
        cout << endl;
    }


    
}







return 0;
}