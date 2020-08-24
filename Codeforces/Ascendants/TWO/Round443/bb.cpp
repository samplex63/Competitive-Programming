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
	ll k;
	cin >> n >> k;
	vector<int> vec(n);
	for(int& x: vec) cin >> x;
	if(k >= n) {
		cout << n << '\n';
	} else {
		deque<int> dq(all(vec));
		map<int, int> mp;
		while(1) {
			if(dq[0] > dq[1]) {
				mp[dq[0]]++;
				if(mp[dq[0]] >= k) {
					cout << dq[0] << '\n';
					return 0;
				}
				int val = dq[1];
				dq.erase(dq.begin() + 1);
				dq.push_back(val);
			} else {
				mp[dq[1]]++;
				if(mp[dq[1]] >= k) {
					cout << dq[1] << '\n';
					return 0;
				}
				int val = dq[0];
				dq.pop_front();
				dq.push_back(val);
			}
		}

	}
	return 0;
}