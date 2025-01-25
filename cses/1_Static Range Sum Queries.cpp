#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
constexpr char nl = '\n';
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, q;
    cin >> n >> q;

    vector<int> v(n+1);
    vector<ll> preSum(n+1, 0);

    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    	preSum[i] = preSum[i - 1] + v[i];
    }

    while (q--) {
    	int l, r;
    	cin >> l >> r;
    	cout << (preSum[r] - preSum[l - 1]) << nl;
    }

    return 0;
}