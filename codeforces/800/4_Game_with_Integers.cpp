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

    	string s = ((n % 3) == 0) ? "Second" : "First";
    	cout << s << nl;
    }

    return 0;
}