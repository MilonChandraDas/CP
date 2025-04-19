#include <bits/stdc++.h>
using namespace std;

using ll = long long;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)

const int mx = 1e6 + 5;
int dp[mx];

int solve(ll sum) {
    if (sum == 0) return 1;
    if (dp[sum] != -1) return dp[sum];

    ll res = 0;
    for (int i = 1; i <= 6; i++) {
        if (sum >= i) {
            res = (res + solve(sum - i)) % MOD;
        }
    }
    return dp[sum] = res;
}

int main() {
    fastio();
    ll n;
    cin >> n;

    memset(dp, -1, sizeof(dp));

    cout << solve(n) << nl;
    return 0;
}
