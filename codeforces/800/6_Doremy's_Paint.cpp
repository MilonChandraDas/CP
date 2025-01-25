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
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }

        if (mp.size() ==  1) cout << "YES" << nl;
        else if (mp.size() == 2) {
        	auto it = mp.begin();
        	auto it2 = mp.begin();
        	it2++;
        	

        	if (it->second == it2->second) cout << "YES" << nl;
        	else if (abs(it->second - it2->second) == 1) cout << "YES" <<nl;
        	else cout << "NO" << nl;
        }
        else cout << "NO" << nl;
    }

    return 0;
}