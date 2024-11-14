# C++ Templates

This repository contains basic and optimized C++ templates for competitive programming and general use.

## Files

### Template_Basic.cpp

This file contains a basic C++ template with input/output optimizations.

```cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

int main() {
    optimize();
    
    // Your code here
    
    return 0;
}
```

### Template.cpp

This file contains an optimized C++ template with additional macros and typedefs for competitive programming.

```cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)x.size()
#define pf push_front
#define pb push_back
#define mp make_pair
#define nl cout << '\n'
#define endl '\n'
#define F first
#define S second

int main() {
    optimize();
    
    // Your code here
    
    return 0;
}
