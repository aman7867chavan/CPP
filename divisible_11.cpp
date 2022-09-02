#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int i=700000000000000;
    // cout<<i;
    // s=to_string(i);               to convert int into string
    // cout<<endl<<s<<endl;
    string s = "";
    cin >> s;

    int size = s.length();
    int even = 0, odd = 0;
    for (int j = 0; j < size; j++)
    {
        if (j % 2 == 0)
            even = even + (int)s[j]; // to convert string into int
        else
            odd = odd + (int)s[j];
    }

    if ((even - odd) % 11 == 0)
        cout << "Divisible by 11";
    else
        cout << "Not divisible";
}
//AMAN CHAVAN