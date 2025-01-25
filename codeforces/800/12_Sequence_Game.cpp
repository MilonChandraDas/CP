#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
constexpr char nl = '\n';
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;

    while (t--) {
    	int n;
    	cin >> n;
    	int a[n];

    	for (int i = 0; i < n; i++) {
    		cin >> a[i];
    	}

    	vector<int> v;
    	v.push_back(a[0]);

    	for (int i = 1; i < n; i++) {
    		if (a[i] < a[i - 1]) {
    			v.push_back(1);
    			v.push_back(a[i]);
    		}
    		else {
    			v.push_back(a[i]);
    		}
    	}

    	cout << v.size() << nl;
    	for (auto x : v) cout << x << ' ';

    	cout << nl;
    }

    return 0;
}