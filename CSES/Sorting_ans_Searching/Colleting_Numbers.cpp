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
    int ans = 0;
    vector<int> pos(n,0);
    while(n--){
        int x; cin >> x , --x;
        if(!pos[x-1]) ++ans;
        pos[x] = 1;
    }

    cout << ans << '\n';
}
