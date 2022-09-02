#include <bits/stdc++.h>
using namespace std;

int value(char c)
{

    switch (c)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    }
}

int roman_int(string S)
{

    int n, ans = 0, p = 0;
    n = S.length() - 1;
    for (int i = n; i >= 0; i--)
    {
        if (value(S[i]) >= p)
        {
            ans = ans + value(S[i]);
        }
        else
            ans = ans - value(S[i]);
        p = value(S[i]);
    }
    return ans;
}
int main()
{

    string S;
    S = "MCXIX";
    cout << roman_int(S);
}
//AMAN CHAVAN