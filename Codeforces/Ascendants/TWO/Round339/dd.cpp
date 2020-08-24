#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	ll A, cf, cm, m;
	cin >> n >> A >> cf >> cm >> m;
	vector<ll> vec(n);
	for(ll& x: vec) cin >> x;
	sort(all(vec));
	vector<ll> ad(n);
	for(int i = 1; i < n; ++i) {
		ad[i] = i * (vec[i] - vec[i - 1]);
	}
	vector<ll> pref(n);
	for(int i = 1; i < n; ++i) {
		pref[i] = ad[i - 1] + ad[i];
	}
	ll curm = m;
	ll ans;
	{
		auto it = upper_bound(all(pref), curm);
		it--;
		int dist = it - pref.begin();
		ll make = curm - *it;
		ll mint = vec[dist];
		ll temp = make / (dist + 1);
		ans = (temp + mint) * cm;	
	}
	for(int i = n - 1; i >= 0; --i) {
		curm -= A - vec[i];
		if(curm == 0) {
			cmx(ans, (n - i) * cf);
			break;
		}
		if(curm < 0) break;
		vec[i] = A;
		auto it = upper_bound(all(pref), curm);
		it--;
		int dist = it - pref.begin();
		ll make = curm - *it;
		ll mint = vec[dist];
		ll temp = make / (dist + 1);
		ll temp_ans = (temp + mint) * cm + (n - i) * cf;
		cmx(ans, temp_ans);
		// cerr << 1 << '\n';
	}
	cout << ans << '\n';
	return 0;
}