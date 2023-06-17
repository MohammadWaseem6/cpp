#include <iostream>
using namespace std;
int display(int arr[], int key)
{
   for (int i = 0; i < 10; i++)
   {
      if (key == arr[i])
      {
         return i;
      }
   }
   return -1;
}
int main()
{
  // string arr={"apple","banana","tea","sugar"};
   int arr[10] = {90, 99, 100, 20, 40, 50, 44, 55, 33, 77};
   int key = 111;
   int index = display(arr, key);

   if (index == -1)
   {
      cout << "key not found" << endl;
   }
   else
   {
      cout << "key is at index :" << index << endl;
   }
}