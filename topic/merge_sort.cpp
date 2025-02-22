#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

const int mx = 2e5+123;
int a[mx];
 
void merge ( int l, int mid, int r )
{
    int p = l; /// first half pointer
    int q = mid+1; /// second half pointer
    int len = r - l + 1;
 
    int v[len];
    int k = 0;
 
    for ( int i = l; i <= r; i++ ) {
        if ( p > mid ) {
            v[k] = a[q];
            k++, q++;
        }
        else if ( q > r ) {
            v[k] = a[p];
            k++, p++;
        }
        else if ( a[p] <= a[q] ) {
            v[k] = a[p];
            k++, p++;
        }
        else {
            v[k] = a[q];
            k++, q++;
        }
    }
 
    k = 0;
    for ( int i = l; i <= r; i++ ) {
        a[i] = v[k];
        k++;
    }
}
 
void mergeSort ( int l, int r )
{
    if ( l == r ) return;
 
    int mid = ( l + r ) / 2;
 
    mergeSort( l, mid );
    mergeSort( mid+1, r );
    merge( l, mid, r );
}
 
int main()
{
    fastio();
    int n;
    cin >> n;
 
    for ( int i = 1; i <= n; i++ ) cin >> a[i];
 
    mergeSort(1, n);
 
    int ans = 1;
 
    for ( int i = 2; i <= n; i++ ) {
        if ( a[i] != a[i-1] ) {
            ans++;
        }
    }
 
    cout << ans << nl;
    return 0;
}