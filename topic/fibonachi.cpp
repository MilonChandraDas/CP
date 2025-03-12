#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr double eps = 1e-9;

#define fraction() cout << fixed << setprecision(10)
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)

const int mx = 1e5;
ll dp[mx];

ll fib (ll n) {
    if (n <= 1) return n;

    if (dp[n] != -1) return dp[n];

    return dp[n] = fib(n-1) + fib(n-2);
}

int main() {
    fastio();
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));
    cout << fib(n);
    return 0;
}