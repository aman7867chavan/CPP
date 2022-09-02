#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "169";

    int size = s.length();
    string last = "";
    last = last + s[size - 1];
    int intlast = stoi(last);

    cout << intlast;
    intlast = intlast * 4;

    string first = "";
    for (int i = 0; i < size - 1; i++)
        first = first + s[i];
    cout << endl
         << first;
    int intfirst = stoi(first);
    cout << endl
         << intfirst;
    int x = intfirst + intlast;
    if (x % 13 == 0)
        cout << "\nDivisible";
    else
        cout << "\nnot";
}
//AMAN CHAVAN