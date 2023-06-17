#include<iostream>
using namespace std;
int main()
{
    //case 1
   /* int a =1;
    int b = 2;
    if(a-- >0 && ++b > 2)
    {
        cout<<"stage 1 inside if"<<endl;
    }
  else
  {
      cout<<"stage 1 inside else"<<endl;
  }
  cout<<a<<++b<<endl;

  //case 2
  int number =3;
  cout<< (25 *(++number));

  //case 3
  int a =1;
  int b = a++;
  int c = ++a;
  cout<<b;
  cout<<c;

//case4
int a,b=1;
a=10;
if(++a)
{
    cout<<a;
}
else

    cout<< (++b);
*/
class Solution {

public:
    bool isPowerOfThree(int n) {
    int x=3;
    if (n==0)
    return false;
    while(n-1)
    if(n%3!=0)
    return false;
        n=n/3;
        return true;
    }
    };

}
