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
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    for (int i = 9; i >= 0; i--) {
        int val = lower_bound(s.begin(), s.end(), '0'+i) - s.begin();

        cout << s[val];
        s.erase(s.begin() + val);
    }
    cout << nl;
    
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