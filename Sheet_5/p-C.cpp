#include <bits/stdc++.h>
#include <algorithm>
#include <numeric>
using namespace std;
#define ll long long int
#define arrayIn(i, n) for (int i = 0; i < n; i++)
#define arrayout(i, n) arrayIn(i, n) cout << a[i] << " ";
#define copyarray arrayIn(i, n) b[i] = a[i];
#define array1 for (int i = 1; i <= n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ANS cout << ans << endl
#define checkmate return 0
#define all(x) (x).begin(), (x).end()
#define ff first
#define ss second
#define golden_ratio 1.6
#define EL cout << endl

void ifWonderful(int n)
{
    // converting to binary
    int a[32], b[32];

    int cnt = 0; // array size will be in here.

    while (n != 0)
    {
        a[cnt] = n % 2; // storing binary representation.

        n = n / 2;
        cnt++;
    }

    // copying
    for (int i = cnt - 1; i >= 0; i--)
        b[i] = a[i];

    // reversing.
    for (int i = 0; i < cnt / 2; i++)
    {
        int temp = a[i];
        a[i] = a[cnt - i - 1];
        a[cnt - i - 1] = temp;
    }

    // comparing;
    bool f = false;
    for (int i = 0; i < cnt; i++)
    {
        if (a[i] != b[i])
        {
            f = true;
            break;
        }
    }

    if (f == 0)
        yes;

    else
        no;
}

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        no;
        return;
    }

    else if (n % 2 != 0)
        ifWonderful(n);
}

int main()
{
    int t = 1; // Total test case.
    // cin >> t;

    while (t--)
        solve();

    checkmate;
}