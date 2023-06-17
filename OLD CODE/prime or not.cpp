#include<iostream>
using namespace std;
int main(){
 cout<<"Enter A Number" <<endl;
int n;
cin>>n;
int i=2;
while(i<n){

if(i%n==0)
{
cout<<"Not prime " <<i<<endl;
}
else{
   cout<<"Prime for "<<i <<endl;
}
i = i+1;
}
}
