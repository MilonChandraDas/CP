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
    ll temp_1 = n*(n+1)/2;
    ll temp_2 = (n-k)*(n-k+1)/2;
    ll max_sum = temp_1-temp_2;

    if (min_sum <= x && x <= max_sum) yes;
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