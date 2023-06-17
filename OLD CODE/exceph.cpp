#include<iostream>
#include<stdio.h>
using namespace std;
template < class t1,class t2>
 float sum( t1 x,t2 y)
 {

     return x+y;
 }
int main(){

     cout<<"int sum ="<<sum(10,20)<<endl;
     cout<<"float="<<sum(2.3,4.5)<<endl;
     cout<<"float sum ="<<sum(13.3,23)<<endl;
 }

