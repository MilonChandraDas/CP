#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define fraction() cout << fixed << setprecision(10)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {
    string s;
    cin >> s;
    stack<int> st;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (st.empty()) {
            cnt++;
            st.push(s[i]);
        }
        else if (s[i] == '(') {
            st.push(s[i]);
        }
        else {
            st.pop();
        }
    }
    
    if (cnt <= 1) no;
    else yes;
    
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}