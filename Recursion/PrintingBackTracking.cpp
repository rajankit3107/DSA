// printing form 1 to n using backtracking
#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    print(n - 1);
    cout << n << " ";
}
//working of the code - print(5) -> print(4) -> print(3) -> print(2) -> print(1) -> print(0) -> return -> print(1) -> print(2) -> print(3) -> print(4) -> print(5) -> return

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}