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

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n, 0); // initializing 'b' vector with 0;

    arrayIn(i, n) cin >> a[i];

    int cnt = 0; // count of those numbers which are not 0.
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            b[cnt] = a[i];
            cnt++;
        }
    }

    arrayIn(i, n) cout << b[i] << " ";
}
int main()
{
    int t = 1; // Total test case.
    // cin >> t;

    while (t--)
        solve();

    checkmate;
}