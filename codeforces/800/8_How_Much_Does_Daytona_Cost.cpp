#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
constexpr char nl = '\n';
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;	cin >> t;

    while (t--) {
      int n, k;
      cin >> n >> k;
      vector<int> v(n);

      for (int i = 0; i < n; i++) cin >> v[i];

      int sz = v.size();

      bool done = false;
      for (int i = 0; i < sz; i++) {
        if (find(v.begin(), v.end(), k) != v.end()) {
          done = true;
        }
      }

      if (done)
        cout << "YES" << nl;
      else
        cout << "NO" << nl;
    }

    return 0;
}