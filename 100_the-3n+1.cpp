#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
typedef pair<ll,ll> pll;
typedef pair<ll,pll> plll;

const ll mod = 1e9+7;
const ll INF = 1e18;

ll countCycle(ll n){
    ll cnt = 1;
    while(n != 1){
        if(n&1){
            n = n*3 + 1;
        }  else{
            n >>= 1;
        }
        cnt++;
    }
    return cnt;
}

void solve() {
    ll i, j, mx;
    while(cin >> i >> j){
        cout << i << " " << j << " ";
        if(i > j) {
            swap(i,j);
        }
        mx = 0;
        for(; i <= j; i++){
            mx = max(mx, countCycle(i));
        }
        cout << mx << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t=1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}