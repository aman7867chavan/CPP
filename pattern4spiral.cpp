#include <iostream>
using namespace std;

int main()
{

    int i = 0, j = 0, count = 0;
    cout << "enter rows";
    int n;
    cin >> n;
    int arr[n][n];

    for (i = 0; i < n / 2; i++)
    {

        for (j = i; j < n - i; j++)
            arr[i][j] = ++count;
        for (j = i + 1; j <= n - i - 1; j++)
            arr[j][n - 1 - i] = ++count;
        for (j = n - i - 2; j >= i; j--)
            arr[n - i - 1][j] = ++count;
        for (j = n - 2 - i; j > i; j--)
            arr[j][i] = ++count;
    }

    for (int p = 0; p < n; p++)
    {
        for (int q = 0; q < n; q++)
            cout << arr[p][q] << " ";
        cout << endl;
    }
}
// AMAN CHAVAN