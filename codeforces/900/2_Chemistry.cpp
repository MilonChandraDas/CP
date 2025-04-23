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
    int n, k;
    cin >> n >> k;
    
    map<char, int> mp;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    int odd_element = 0;
    for (auto c : mp) {
        if (c.second % 2 == 1) odd_element++;
    }

    if (odd_element <= 1) yes;
    else {
        if (odd_element - 1 <= k) yes;
        else no;
    }
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