#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int stIdx = 0;
    int endIdx = size - 1;

    while (stIdx < endIdx)
    {

        swap(arr[stIdx], arr[endIdx]);
        stIdx++;
        endIdx--;
    }
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

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}