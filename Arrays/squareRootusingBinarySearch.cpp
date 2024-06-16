#include <iostream>
using namespace std;

long long int binarySearch(int arr[], int n)
{
    int s = 0;
    int e = n;

    long long int mid = s + (e - s) / 2;

    int ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Square Root of given number is" << binarySearch(arr, n);
}