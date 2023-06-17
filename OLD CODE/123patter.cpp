#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int  count =1;
    int  i= 1;
    while(i<=n)
    {

        int j = i;
        while(j<=n)
        {

            cout<<j;
            j= j+1;
        }
        cout<<endl;
        i = i+1;

    }




}
