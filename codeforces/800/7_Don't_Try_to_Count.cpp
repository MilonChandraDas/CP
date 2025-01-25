#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
constexpr char nl = '\n';
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) {
    	int n, m;		cin >> n >> m;
    	string x, s;	cin >> x >> s;

    	bool done = 0;

    	for (int i = 0; i < 10; i++) {
    		if (x.find(s) != -1) {
    			done = 1;
    			cout << i << nl;
    			break;
    		}
    		else {
    			x += x;
			}
    	}

    	if (!done) cout << -1 << nl;
    }

    return 0;
}