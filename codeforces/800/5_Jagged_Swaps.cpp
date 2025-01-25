#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
constexpr char nl = '\n';
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;

    while (t--) {
    	int n; cin >> n;
    	vector<int> v(n);

    	for (int i = 0; i < n; i++) cin >> v[i];

    	if (v[0] == 1) cout << "YES" << nl;
    	else cout << "NO" << nl;
    }

    return 0;
}