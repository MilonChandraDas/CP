#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    int t;
    cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int ans = (s.find("...") != -1) ? 2 : (count(s.begin(), s.end(), '.'));
        cout << ans << nl;
    }
    
    return 0;
}