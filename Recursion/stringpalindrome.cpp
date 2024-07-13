#include <iostream>
using namespace std;

int palindrome(string s, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    if (s[start] != s[end])
    {
        return 0;
    }
    return palindrome(s, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    cout << palindrome(s, 0, n - 1);
}