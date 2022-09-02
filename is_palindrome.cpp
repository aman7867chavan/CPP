#include <bits/stdc++.h>
using namespace std;

string is_palindrome(string s)
{

    string rev = s;
    int size = s.length();
    for (int i = 0; i < size / 2; i++)
    {
        int temp;
        temp = s[i];
        s[i] = s[size - 1 - i];
        s[size - 1 - i] = temp;
    }
    if (s == rev)
        return "palindrome";
    else
        return "not";
}

int main()
{

    string s;
    getline(cin, s);
    cout << is_palindrome(s);
}
//AMAN CHAVAN