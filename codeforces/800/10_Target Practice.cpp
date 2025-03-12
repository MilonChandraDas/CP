#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);
 
void solve() {
    int ans = 0;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            char c;
            cin >> c;
            if (c == 'X') {
                ans += min(min(i, 10-i+1), min(j, 10-j+1));
            }
        }
    }
    cout << ans << nl;
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
 