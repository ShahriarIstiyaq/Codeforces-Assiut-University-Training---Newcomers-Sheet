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

void shiftRight(int a[], int n)
{
    int temp = a[n - 1]; // storing the last element which will to the first index.

    for (int i = n - 2; i >= 0; i--)
        a[i + 1] = a[i]; // shifting all element to right.
    a[0] = temp;
}
void solve()
{
    int n, x;
    cin >> n >> x;

    int a[n + 5];
    arrayIn(i, n) cin >> a[i];

    while (x--)
        shiftRight(a, n);

    arrayout(i, n);
}

int main()
{
    int t = 1; // Total test case.
    // cin >> t;

    while (t--)
        solve();

    checkmate;
}