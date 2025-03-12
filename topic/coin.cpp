#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr double eps = 1e-9;

#define fraction() cout << fixed << setprecision(10)
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)

vector<int> v = {5, 12, 23};
const int mx = 1e5;
int dp[mx];


int is_possible(int n) {
    if (n < 0) return false;
    if (n == 0) return true;

    if (dp[n] != -1) return dp[n];
    
    int res = 0;
    for (auto coin : v) {
        if (is_possible(n - coin))  res = 1;
    }
    return dp[n] = res;
}

int main() {
    fastio();
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << is_possible(n);
    return 0;
}