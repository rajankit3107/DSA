#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while (temp > 0) {
        int lastDigit = temp % 10;
        sum += lastDigit * lastDigit * lastDigit;
        temp /= 10;
    }
    if (sum == n) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }
    return 0;
}