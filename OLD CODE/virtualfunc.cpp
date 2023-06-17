#include <iostream>

using namespace std;

int main()
{
   int n, t1 = 0, t2 = 1, nextTerm = 0; // declare variables

   cout << "Enter the number of terms: ";
   cin >> n; // get input from user

   cout << "Fibonacci Series: ";

   for (int i = 1; i <= n; ++i) // loop to generate Fibonacci series
   {
       // Print the first two terms (0 and 1)
       if(i == 1)
       {
           cout << t1 << ", ";
           continue;
       }
       if(i == 2)
       {
           cout << t2 << ", ";
           continue;
       }

       // Compute the next term
       nextTerm = t1 + t2;
       t1 = t2;
       t2 = nextTerm;

       cout << nextTerm << ", "; // print the next term
   }
   return 0;
}
