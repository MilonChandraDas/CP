#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;
constexpr int INF = 1e9;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (n % 2 == 0)
    {
        cout << 2 << nl;
        cout << 1 << " " << n << nl;
        cout << 1 << " " << n << nl;
    }
    else
    {

        cout << 4 << nl;
        cout << 1 << " " << n - 1 << nl;
        cout << 1 << " " << n - 1 << nl;
        cout << n - 1 << " " << n << nl;
        cout << n - 1 << " " << n << nl;
    }
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}