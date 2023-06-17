#include <iostream>
using namespace std;
int linsearch(int arr[], int key)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;

  int main()
 {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    cout << "Key is at index :" << linsearch << endl;
     int numbers[5] = {10, 20, 22, 23, 24};
     cout << "Element at index:" << endl
          << numbers[4] << endl;
  }
}