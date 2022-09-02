#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n, dig;
    cout << "Enter number\n";
    cin >> n;
    int z = n;
    int sum = 0;
    while (n != 0)
    {
        dig = n % 10;
        sum = sum + (dig * dig * dig);
        n = n / 10;
    }
    // cout<<sum;
    if (z == sum)
        cout << "armstrong number\n";
    else
        cout << "not an armstrong number";
}
//Aman Mahesh Chavan