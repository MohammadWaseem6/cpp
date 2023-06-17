#include<iostream>
#include<cmath>
int pow(int , int );
int main()
{
int sq;
    int a = 10;
    int b = 20;
 int res = pow(a,b);
    printf("%d",sq);


}
   int pow(int p, int q){

   int temp= p;
   while(--q)
    q*=temp;

   return q;
}

