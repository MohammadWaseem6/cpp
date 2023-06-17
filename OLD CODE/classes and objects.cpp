#include<iostream>
using namespace std;
class xyz
{
int  a,b;
public:
    void  getdata();
    void displayarray();
    };
    void xyz :: getdata()
    {
        cout<<"Enter Data " <<endl;

           cin>>a>>b;

    }
        void xyz ::displayarray()
        {
       cout<<"Elements of a and b are :" <<a<<" " <<b<<endl;
        }
        int main()
        {
            int i;
            xyz aa[5];
            for(i=0;i<5;i++)
            aa[i].getdata();
            for(i=0;i<5;i++)
            aa[i].displayarray();
            return 0;
        }


