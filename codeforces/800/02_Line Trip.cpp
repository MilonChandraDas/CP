#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    
    int t; cin >> t;
    while (t--) {
        int n, x; 
        cin >> n >> x;
        vector<int> v;

        v.push_back(0);

        for (int i = 1; i <= n; i++) {
            int a; cin >> a;
            v.push_back(a);
        }

        v.push_back(x);

        int size = v.size();
        int min_val = 0;

        for (int i = 1; i < size; i++) {
            min_val = max(min_val, v[i] - v[i - 1]);
            
            if (v[i] == v[size - 1]) {
                min_val = max(min_val, 2*(v[i] - v[i - 1]));
            }
        }
        cout << min_val << nl;
    }
    
    return 0;
}