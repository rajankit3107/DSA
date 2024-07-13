#include <iostream>
using namespace std;

int stairCase(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return stairCase(n - 1) + stairCase(n - 2);
    }
}

int main()
{
    int n;

    cin >> n;
    cout << stairCase(n);
}