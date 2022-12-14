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
#define reset(a, val) memset(a, val, sizeof(a))
#define SQR(a) (1LL)*(a)*(a)
#define BIT(a) (1 << (a))
#define sz(a) int(a.size())
#define all(a) a.begin(), a.end()
#define MAX 10050
///Read File
void IOF(const string &NAME = ""){
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
using ii = pair<int, int>;

const int MOD = (int) 1e9 + 7;
const int inf = (int) 1e9 + 7;

/** END OF TEMPLATE **/

ll times;

void solve(){
    string s1, s2;
    bool check[9], nth = false, am = false;
    reset(check, false);
    cin >> s1 >> s2;
    int l1 = sz(s1), l2 = sz(s2);
    rep(i, 0, l1, 1){
        int h = int(s1[i]) - 48;
        check[h] = true;
    }
    int k = 1;
    rep(i, 0, l2 - 1, 1){
        int h1 = int(s2[i]) - 48;
        int h2 = int(s2[i + 1]) - 48;
        if(!check[h1] && !check[h2]){
            int x = h1 + 1, x1 = h1 - 1, y = h2 - 1, y1 = h2 + 1;
            if(i > 0) if(x1 >= 0 && y1 >= 0){
                if((check[x] && check[y]) || (check[x1] && check[y1])){
                    am = true;
                    k++;
                }
            }
        } else 
            if(!check[h1] || !check[h2]){
                nth = true;
            }
    }
    if(nth && (k > 2 || k == 1)) cout << "nothing"; else if(am) cout << "almost friends"; else cout << "friends";
}

signed main(){
    FASTIO;
    IOF("test");
    //cin >> times;
    times = 1;
    while(times > 0){
        solve();
        times--;
    }
}
