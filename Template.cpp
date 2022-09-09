#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")

using namespace std;

///Loops
#define fow(i,start,end,step) for(ll i = (start); i <= (end); i += (step))
#define rep(i,start,end,step) for(ll i = (start); i < (end); i+= (step))
#define dow(i,start,end,step) for(ll i = (start); i >= (end); i-= (step))
///Others
#define FASTIO ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define reset(a, val) memset(a, val, sizeof(a))
#define SQR(a) (1LL)*(a)*(a) // a * a
#define BIT(a) (1 << (a)) // 2^a
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define MAX 500500
///Read File
void setIO(const string &NAME = ""){
    if ((int) NAME.length() && fopen((NAME + ".inp").c_str(), "r")) {
        freopen((NAME + ".inp").c_str(), "r", stdin),
        freopen((NAME + ".out").c_str(), "w", stdout);
    }
}
///Sort & Remove Duplicate
void ReDup(vector<int> &v){
    sort(all(v)); v.erase(unique(all(v)), v.end());
}
///Minimize a = min(a, b)
template<class X, class Y> bool ckmin(X &x, const Y &y) {
        X eps = 1e-9;
        if (x > y + eps) {
            x = y;
            return true;
        } else return false;
    }
///Maximize a = max(a, b)
template<class X, class Y> bool ckmax(X &x, const Y &y) {
        X eps = 1e-9;
        if (x + eps < y) {
            x = y;
            return true;
        } else return false;
    }
using ll = long long;
using lli = long long int;
using ulli = unsigned long long int;
using db = double;
using fl = float;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using mii = map<int, int>;
using msi = map<string, int>;

const int MOD = (int) 1e9 + 7; //998244353;
const int inf = (int) 1e9 + 7;
const ll INF = 1e18;
/** END OF TEMPLATE **/
ll times;

void solve(){
    
}

signed main(){
    FASTIO;
    setIO("test");
    //cin >> times;
    times = 1;
    while(times > 0){
        solve();
        times--;
    }
}
