#include <iostream>
using namespace std;
#include <string>


int main()
{
  int avote = 0, bvote = 0, cvote = 0, nota = 0, i;
  int vote;
  string inv;





  for(i=0; i<=2; i++)
  {
    system("cls");

    cout << "1 to vote A" << endl;
    cout << "2 to vote B" << endl;
    cout << "3 to vote C" << endl;
    cout << "4 for no vote" << endl;

    cin >> vote;

    
    // if(vote > 4)
    // {
    //   cout << "invalid vote";
    //   i --;
    // }
    // else

    
{
    switch(vote)
    {
      case 1:
        avote++;
        break;

      case 2:
        bvote++;
        break;

      case 3:
        cvote++;

      case 4:
        nota++;
        break;
      
      default:
        cout << "Invalid vote" << endl;
        i--;
    }

}
  }

  cout << "A = " << avote << endl;
  cout << "B = " << bvote << endl;
  cout << "C = " << cvote << endl;
  cout << "Nota = " << nota << endl;
}