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

char a[105][105];

void input(ll n, ll m){
    memset(a, '.', sizeof a);
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m; j++) cin >> a[i][j];
    }
}

ll isMine(char x){
    return x == '*';
}

void solve() {
    ll n,m;
    ll cnt = 1;
    cin >> n >> m;
    while(1){
        input(n, m);
        cout << "Field #" << cnt++ << ":\n";
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <=m; j++){
                if(a[i][j] == '*'){
                    cout << "*"; continue;
                }
                cout << isMine(a[i][j+1]) + isMine(a[i+1][j]) + isMine(a[i+1][j+1]) + isMine(a[i-1][j]) + isMine(a[i][j-1]) + isMine(a[i-1][j-1]) + isMine(a[i-1][j+1]) + isMine(a[i+1][j-1]);
            }
            cout << "\n";
        }
        cin >> n >> m;
        if(n == 0 && m == 0){
            break;
        }
        cout << "\n";
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