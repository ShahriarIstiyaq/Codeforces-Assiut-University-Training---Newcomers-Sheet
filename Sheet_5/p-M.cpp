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

int Unique(int a[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);

    return s.size();
}

void solve()
{
    int n;
    cin >> n;

    int a[n];
    arrayIn(i, n) cin >> a[i];

    int ans = Unique(a, n);
    ANS;
}

int main()
{
    int t = 1; // Total test case.
    // cin >> t;

    while (t--)
        solve();

    checkmate;
}