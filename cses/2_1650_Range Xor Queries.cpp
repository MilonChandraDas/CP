#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

const int mx = 2e5+1;
int a[mx];
int pre_sum[mx];

void solve() {
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pre_sum[i] = pre_sum[i - 1] ^ a[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << (pre_sum[r] ^ pre_sum[l-1]) << nl;
    }
}

int main() {
    fastio();
    
    solve();
    return 0;
}