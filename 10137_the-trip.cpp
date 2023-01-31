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

double a[1005];

void solve() {
    ll n, tot, dollar, cent, given, taken;
    double avg;
    while(true){
        cin >> n;
        if(n == 0) break;
        tot = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            a[i] *= 100;
            tot += a[i];
        }
        avg = ((double)tot)/n;
        given = taken = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] > avg){
                given += a[i] - avg;
            } else{
                taken += avg - a[i];
            }
        }
        cout << "$" << fixed << setprecision(2) << (taken > given ? (double)taken/100.0 : (double)given/100.0) << "\n";

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