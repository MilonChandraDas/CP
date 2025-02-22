#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

const int mx = 2e5+12;
int a[mx];
ll pre_sum[mx];

int main() {
    fastio();
    
    ll n, x;
    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pre_sum[i] = pre_sum[i - 1] + a[i];
    }

    map<ll, int> cnt;
    cnt[0] = 1;
    ll ans = 0;

    for (int i = 1; i <= n; i++) {
        ll sum_minus = pre_sum[i] - x;
        ans += cnt[sum_minus];
        cnt[pre_sum[i]]++;
    }

    cout << ans << nl;
    
    return 0;
}