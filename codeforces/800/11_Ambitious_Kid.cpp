#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
constexpr char nl = '\n';
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    int ans = 1e6;

    while (n--) {
    	int x; 
    	cin >> x;
    	ans = min(ans, abs(x));
    }

    cout << ans << nl;

    return 0;
}