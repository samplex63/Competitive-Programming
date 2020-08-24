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
void solve(){
	int n;
	cin >> n;
	vi inp(n);
	for(int i = 0; i < n; i++){
		cin >> inp[i];
	}
	auto maxe = [&](const vi &v){
		int ans1 = 0;
		int ans2 = 0;
		for(int i = 0; i < n; i++){
			if(v[i] == 1){
				ans1++;
			}else{
				ans2 = max(ans1, ans2) + 1;
			}
		}
		return max(ans1, ans2);
	};
	vector<pii> v21;
	vi copy = inp;
	int finalans = maxe(inp);
	for(int i = 0; i < n; i++){
		if(inp[i] == 2){
			bool onegot = false;
			int right = i;
			for(int j = i + 1; j < n; j++){
				if(onegot == false && inp[j] == 1){
					onegot = true;
				}else if(onegot == true && inp[j] == 2){
					right = j;
					break;
				}
				if(j == n - 1){
					right = n;
				}
			}
			copy = inp;
			reverse(copy.begin() + i, copy.begin() + right);
			// cerr << i << ' ' << right << '\n';
			// for(int x : copy){
			// 	cerr << x << ' ';
			// }cerr << '\n';
			int tempans = maxe(copy);
			finalans = max(finalans, tempans);
		}
	}
	cout << finalans << '\n';

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