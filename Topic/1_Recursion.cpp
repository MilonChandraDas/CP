#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

int fact(int n) {
    if (n == 0) return 1;

    int res = n * fact(n - 1);
    return res;
}

int main() {
    fastio();
    
    int n;
    cin >> n;

    int ans = fact(n);
    cout << ans;
    
    return 0;
}