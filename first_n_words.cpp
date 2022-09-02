#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "Enter sentence\n";
    getline(cin, s);
    cout << "Enter number of words\n";
    int words;
    cin >> words;
    queue<string> q;
    string str = "";
    // cout<<s;
    int size = s.length();
    for (int i = 0; i < size; i++)
    {
        if (s[i] != ' ')
        {
            str = str + s[i];
        }
        else
        {
            q.push(str);
            str = "";
        }
    }
    for (int i = 0; i < words; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
}
//AMAN CHAVAN