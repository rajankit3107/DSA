#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int stIdx = 0;
    int endIdx = size - 1;

    while (stIdx <= endIdx)
    {
        int mid = stIdx + (endIdx - stIdx) / 2; // to avoid integer ovrflow overflow

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            endIdx = mid - 1;
        }
        else
        {
            stIdx = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << "Element found at index: " << binarySearch(arr, size, key);
}