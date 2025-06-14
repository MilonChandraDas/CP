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
    int cnt1 = 0, cnt0 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') cnt1++;
        else cnt0++;
    }

    int mini = min(cnt1, cnt0);
    if (mini % 2 == 0) cout << "NET" << nl;
    else cout << "DA" <<nl;
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