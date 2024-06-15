#include <iostream>
using namespace std;

int findUniqueElement(int arr[], int size)
{
    int uniqueElement = 0;

    for (int i = 0; i < size; i++)
    {
        uniqueElement = uniqueElement ^ arr[i];

        // explain working - 1^1 = 0, 0^0 = 0, 1^0 = 1, 0^1 = 1
    }

    return uniqueElement;
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