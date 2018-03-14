#include <iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout << "Enter a number lenght: ";
    cin >>a;
    cin>>b;
    for(i = a+1; i <= b-1; ++i)
    {
      if(i%2 != 0)
      {
          cout<<i<<"    ";
      }        
    }
return 0;
}
