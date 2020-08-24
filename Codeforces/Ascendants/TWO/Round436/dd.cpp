#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb(x) emplace_back(x)
#define sz(x) static_cast<int> ((x).size())
#define all(x) (x).begin(), (x).end()
#define pii pair<int,int>
#define pll pair<ll,ll>
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
const ll infl = 0x3f3f3f3f3f3f3f3fLL;
const int infi = 0x3f3f3f3f;
const ll mod = 1000000007;
//const ll mod = 998244353;
//const ll mod = infl;
//uncomment cin >> tt;

/* Template taken from tourist*/
string to_string(string s) {
  return '"' + s + '"';
}

string to_string(const char* s) {
  return to_string((string) s);
}

string to_string(bool b) {
  return (b ? "true" : "false");
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A>
string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}
#ifndef ONLINE_JUDGE
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 0
#endif

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for(auto &x: vec) cin >> x;
	map<int, int> m;
	for(auto x: vec) {
		m[x]++;
	}
	set<int> rem;
	for(int i = 1; i <= n; i++) {
		if(m[i] == 0) rem.insert(i);
	}
	// debug(m);
	// debug(rem);
	cout << sz(rem) << '\n';
	for(auto &x: vec) {
		if(rem.empty()) break;
		if(m[x] > 1 && *rem.begin() < x) {
			m[x]--;
			x = *rem.begin();
			rem.erase(rem.begin());
		}
		if(sz(rem) == 0) break;
	}
	// cerr << "HERE" << endl;
	// debug(vec);
	// debug(m);
	for(int i = n - 1; i >= 0; i--) {
		if(rem.empty()) break;
		int val = *rem.rbegin();
		if(m[vec[i]] > 1 && val > vec[i]) {
			m[vec[i]]--;
			vec[i] = val;
			rem.erase(val);
		}
	}
	for(auto x: vec) {
		cout << x << " ";
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout << fixed << setprecision(20);
	int tt;	tt = 1;
	//cin >> tt;
	while(tt--){
		solve();
	}
	return 0;
}