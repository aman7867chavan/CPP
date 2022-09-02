#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "7119";

    int size = s.length();
    string last = "";
    last = last + s[size - 1];
    int intlast = stoi(last);

    cout << intlast;

    string first = "";
    for (int i = 0; i < size - 1; i++)
        first = first + s[i];
    cout << endl
         << first;
    int intfirst = stoi(first);
    cout << endl
         << intfirst;
    int x = intfirst - (2 * intlast);
    if (x % 7 == 0)
        cout << "\nDivisible";
    else
        cout << "\nnot";
}
//aman chavan