#include <iostream>
using namespace std;

int main()
{

    // Brute Force Approach
    // Time complexity: O(n)
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // int count = 0;
    // for (int i = 1; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //     }
    // }
    // if (count == 1)
    // {
    //     cout << "Prime Number" << endl;
    // }
    // else
    // {
    //     cout << "Not a Prime Number" << endl;
    // }

    // Optimized code
    // Time complexity: O(sqrt(n))

    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
            {
                count++;
            }
            else
            {
                count += 2;
            }
        }
    }

    if (count == 2)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not a Prime Number" << endl;
    }
}