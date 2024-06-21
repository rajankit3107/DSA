#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number u want to check: ";
    cin >> n;

    long sum = 0;
    int originalN = n;

    while (n > 0)
    {
        long lastDigit = n % 10;
        sum = sum + lastDigit * lastDigit * lastDigit;
        n = n / 10;
    }
    if (sum == originalN)
    {
        cout << originalN << " It is a Armstrong Number" << endl;
    }
    else
    {
        cout << originalN << " is not a Armstrong Number" << endl;
    }
}