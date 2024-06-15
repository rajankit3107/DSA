#include <iostream>
using namespace std;

int firstOcuur(int arr[], int size, int key)
{
    int stIdx = 0;
    int endIdx = size - 1;
    int mid = stIdx + (endIdx - stIdx) / 2;

    int ans = -1;

    while (stIdx <= endIdx)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            endIdx = mid - 1;
        }
        else if (arr[mid] > key)
        {
            endIdx = mid - 1;
        }
        else
        {
            stIdx = mid + 1;
        }
        mid = stIdx + (endIdx - stIdx) / 2; // because mid is not updated in the loop
    }

    return ans;
}

int lastOccur(int arr[], int size, int key)
{
    int stIdx = 0;
    int endIdx = size - 1;
    int mid = stIdx + (endIdx - stIdx) / 2;

    int ans = -1;

    while (stIdx <= endIdx)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            stIdx = mid + 1;
        }
        else if (arr[mid] > key)
        {
            endIdx = mid - 1;
        }
        else
        {
            stIdx = mid + 1;
        }

        mid = stIdx + (endIdx - stIdx) / 2;
    }
    return ans;
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

    cout << "First Occurence: " << firstOcuur(arr, size, key) << endl;
    cout << "Last Occurence: " << lastOccur(arr, size, key) << endl;

    return 0;
}