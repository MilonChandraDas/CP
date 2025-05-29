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
    string s, t;
    cin >> s >> t;

    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) j++;
        i++;
    }
    if (j == t.size()) yes;
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