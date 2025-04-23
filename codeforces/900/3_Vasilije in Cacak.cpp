#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;
constexpr int INF = 1e9;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;

    ll min_sum = k*(k+1)/2;
    ll max_sum = n*k - k*(k-1)/2;

    if (x >= min_sum && x <= max_sum) yes;
    else no;
}

int main() {
    fastio();
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    
    return 0;
}