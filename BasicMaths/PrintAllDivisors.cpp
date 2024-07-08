#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Brute Force Approach
    // Time complexity: O(n)

    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // Optimized code

    //Time complexity: O(sqrt(n))   

    for (int i = 0; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
            {
                cout << n / i << " ";
            }
        }
    }
}