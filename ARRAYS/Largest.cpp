#include <iostream>
using namespace std;
int largest(int arr[])
{
    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
        if (smallest > arr[i])
            smallest = arr[i];
    }
    cout << "Smallest number is :" << smallest << endl;
    return largest;
}
int main()
{
    int arr[5] = {20, 30, 40, 50, 60};
    int index = largest(arr);
    cout << "The largest number is: " << index << endl;
    return 0;
}
