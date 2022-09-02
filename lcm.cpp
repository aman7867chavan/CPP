#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "enter a and b\n";
    cin >> a >> b;

    int gcd;
    if (a > b)
    {
        int t;
        t = a;
        a = b;
        b = t;
    }

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    // cout<<gcd;

    int lcm;
    lcm = a * b / gcd;
    cout << lcm;
}
// AMAN CHAVAN