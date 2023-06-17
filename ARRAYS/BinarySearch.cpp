#include <iostream>
using namespace std;

int BinarySearch(int arr[], int key, int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 14;

    int index = BinarySearch(arr, key, size);

    if (index != -1)
    {
        cout << "Key found at index: " << index << endl;
    }
    else
    {
        cout << "Key not found." << endl;
    }

    return 0;
}
