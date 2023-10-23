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
    vector<int> a(n);
    vector<int> b(n);
    arrayIn(i, n) cin >> a[i];
    arrayIn(i, n) cin >> b[i];

    int x = a.size() + b.size();
    vector<ll> c(x);

    for (int i = 0; i < n; i++)
    {
        c[i] = b[i];
        c[n + i] = a[i];

        // cout << "pos1: " << i << " pos2: " << n + i << endl;
        // cout << "valB: " << b[i] << " In C: " << c[i] << endl;
        // cout << "valA: " << a[i] << " In C: " << c[n + i] << endl;
    }

    for (int i = 0; i < x; i++)
        cout << c[i] << " ";
}

int main()
{
    int t = 1; // Total test case.
    // cin >> t;

    while (t--)
        solve();

    checkmate;
}