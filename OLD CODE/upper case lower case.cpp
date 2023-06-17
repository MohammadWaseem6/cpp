#include<iostream>
using namespace std;

int main()
{
char ch;
cout<<"Enter any character: ";
cin>>ch;
if(ch>=65&&ch<=90){
cout<<"You entered an uppercase character" <<endl;
}
else if(ch>=48&&ch<=57)
{
cout<<"You entered a digit";
}
else if(ch>=97&&ch<=122)
{
cout<<endl<<"You entered a lowercase character"<<endl;
}
else
{
cout<<"You entered a special character"<<endl;
}
return 0;
}
