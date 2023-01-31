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

set<ll> st;

string checkJolly(vector<ll> v){
    for(ll i = 1; i < (ll)v.size(); i++){
        st.insert(abs(v[i]- v[i-1]));
    }
    for(ll i = 1; i < (ll)v.size(); i++){
        if(st.find(i) == st.end()) return "Not jolly";
    }
    return "Jolly";
}

void solve() {
    ll n;
    while(cin >> n){
        vector<ll> v(n);
        st.clear();
        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }
        cout << checkJolly(v) << "\n";
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