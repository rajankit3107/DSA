#include <iostream>
using namespace std;

int main()
{
    // Bruce Force Approach
    // Time complexity: O(n)

    int a, b;
    cin >> a >> b;

    int gcd = 1;
    // for (int i = 1; i <= a && i <= b; i++)
    // {
    //     if (a % i == 0 && b % i == 0)
    //     {
    //         gcd = i;
    //     }
    // }

    // cout << gcd << endl;

    // Optimized code
    // Time complexity: O(log(min(a, b)))

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        cout << b << endl;
    }
    else
    {
        cout << a << endl;
    }
}
