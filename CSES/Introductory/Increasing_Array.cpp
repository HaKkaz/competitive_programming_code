#pragma GCC optimize("Ofast", "unroll-loops", "fast-math")
#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0)
#define endl '\n'
#define cerr if(1);else cerr
#define _ <<' '<<
#define ALL(v) v.begin(),v.end()
#define ft first
#define sd second
using ll = long long;
using ld = long double;
using pii = pair<int,int>;

signed main(){
    fast;
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i ;

    ll ans = 0 ;
    for(int i=1 ; i<n ; ++i){
        if(a[i] < a[i-1]){
            ans += (a[i-1] - a[i]);
            a[i] = a[i-1];
        }
    }
    cout << ans << '\n';
}

