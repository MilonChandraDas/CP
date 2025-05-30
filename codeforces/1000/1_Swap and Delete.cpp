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
    string s;
    cin >> s;

    vector<char> v;
    int one = 0, zero = 0;
    for (int i = 0; i < s.size(); i++) {
        v.push_back(s[i]);
        if (s[i] == '1') one++;
        else zero++;
    }

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == '1') {
            if (zero > 0) zero--;
            else break;
        }
        if (v[i] == '0') {
            if (one > 0) one--;
            else break;
        }
    }
    cout << one + zero << nl;
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