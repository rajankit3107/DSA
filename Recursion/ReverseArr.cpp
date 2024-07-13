#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }
    else
    {
        cout << arr[size - 1] << " ";
        reverseArr(arr, size - 1);
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

    reverseArr(arr, size);
}