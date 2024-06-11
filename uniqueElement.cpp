#include <iostream>
using namespace std;

int findUniqueElement(int arr[], int size)
{

    int temp = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (temp == arr[i])
        {
            i++;
        }
        else
        {
            temp = arr[i];
        }
    }

    return temp;
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

    cout << "Unique element is: " << findUniqueElement(arr, size);

    return 0;
}