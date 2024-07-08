#include <iostream>
using namespace std;

// int count = 0;
//Time complexity: O(n)
//space complexity: O(n)
void printName(int n, string name)
{
    int count = 0;
    while (count < n)
    {
        cout << name << endl;
        count++;
    }
}

int main()
{
    int n;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter the number of times you want to print the name: ";
    cin >> n;

    printName(n, name);
}