#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
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