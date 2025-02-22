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
        int n;
        cin >> n;

        cout << ((n%3 != 0) ? "First" : "Second") << nl;
    }
    
    return 0;
}