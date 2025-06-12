#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    
    int cnt0 = count(s.begin(), s.end(), '0');
    int cnt1 = n - cnt0;

    int res = abs(cnt1-cnt0) / 2;

    if (k < res) no;
    else if ((k - res) % 2 == 0) yes;
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