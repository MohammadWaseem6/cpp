#include<iostream>
using namespace std;
class my_class
{
public: // access specifier
    void sum(int sum1,int sum2)
    {
      cout<<"The sum of numbers is :"<<endl;
       cout<<(sum1+sum2)<<endl;
    }
};
int main()
{
    my_class obj;//creating object
    obj.sum(10,20);//calling sum through object
    return 0;
}
