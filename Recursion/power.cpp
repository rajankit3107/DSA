#include <iostream>
#include <math.h>

using namespace std;

int power(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return pow(2, n) * power(pow(2, n - 1));
    }
}

int main()
{
    int n;
    cin >> n;

    cout << power(n);
}