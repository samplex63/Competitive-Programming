#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fi first
#define se second
#define int long long
typedef long long ll;
typedef long double f80;
#define ld long double
#define pii pair<int,int>
#define pll pair<ll,ll>
#define sz(x) ((long long)x.size())
#define fr(a,b,c) for(int a=b; a<=c; a++)
#define rep(a,b,c) for(int a=b; a<c; a++)
#define trav(a,x) for(auto &a:x)
#define all(con) con.begin(),con.end()
const ll infl = 0x3f3f3f3f3f3f3f3fLL;
const int infi = 0x3f3f3f3f;
//const int mod = 998244353;
//const int mod = 1000000007;
const int mod = infl;
typedef vector<int> vi;
typedef vector<ll> vl;
int mygcd(int a, int b){
	if(b == 0){
		return a;
	}
	return mygcd(b, a % b);
}
int mypow(int a, int b) {
	int res = 1;
	while(b) {
		if(b & 1)
			res = (res * a) % mod;
		a = ( a * a ) % mod;
		b >>= 1;
	}
	return res;
}
struct st{
	int ind, l, r, parent;
};
void solve(){
	int n;
	cin >> n;
	vi v(n);
	vector<vector<int>> mm(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	for(int i = 0; i < n - 1; i++){
		int x, y;
		cin >> x >> y;
		x--;y--;
		mm[x].pb(y);
		mm[y].pb(x);
	}
	vector<int> ans(n);
	vector<st> queue;
	queue.pb({0, v[0], 0, -1});
	// l nonzero
	// r zero
	for(int i = 0; i < sz(queue); i++){
		st par = queue[i];
		int s = par.ind;
		ans[par.ind] = max(par.l, par.r);
		for(int j = 0; j < sz(mm[par.ind]); j++){
			int indchild = mm[s][j];
			if(indchild == par.parent) continue;
			int valchild = v[indchild];
			int zero = par.l;
			int nonzero = mygcd(par.r, valchild);
			queue.pb({indchild, nonzero, zero, s});
		}
	}
	// for(int i = 0; i < sz(queue); i++){
	// 	cout << queue[i].ind << ' ' << queue[i].l << ' ' << queue[i].r << endl;
	// }
	for(auto x : ans){
		cout << x << ' ';
	}

}
signed main(){
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(20);
	cin.tie(NULL);
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
	return 0;
}