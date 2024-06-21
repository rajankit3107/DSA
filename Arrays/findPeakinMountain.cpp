#include <iostream>
using namespace std;

int findPeakIndexInArray(int arr[], int size)
{

    int stIdx = 0;
    int endIdx = size - 1;

    int mid = stIdx + (endIdx - stIdx) / 2;

    while (stIdx < endIdx)
    {
        if (arr[mid] <= arr[mid + 1])
        {
            stIdx = mid + 1;
        }
        else
        {
            endIdx = mid;
        }
        mid = stIdx + (endIdx - stIdx) / 2;
    }
    return stIdx;
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

    cout << "Peak element of given array is at Index: " << findPeakIndexInArray(arr, size);
}