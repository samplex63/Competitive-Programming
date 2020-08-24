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
	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n + 1);
		for(int i = 1; i <= n; ++i) cin >> vec[i];
		vector<int> ha(n + 1);
		for(int i = 1; i <= n; ++i) {
			ha[vec[i]] = i;
		}
		int l = 1, r = n;
		vector<bool> go(n + 1);
		int flag = 1;
		int start;
		if(ha[l] > ha[r]) {
			start = ha[r];
			flag ^= 1;
		} else {
			start = ha[l];
		}
		go[start] = true;
		while(1) {
			if(flag) {
				while(l < r && start > ha[r]) r--;
				start = ha[r];
				go[start] = true;
			} else {
				while(l < r && start > ha[l]) l++;
				start = ha[l];
				go[start] = true;
			}
			flag ^= 1;
			if(l >= r) break;
		}
		l = 1, r = n;
		flag = 1;
		if(ha[l] > ha[r]) {
			start = ha[r];
			flag ^= 1;
		} else {
			start = ha[l];
		}
		while(1) {
			if(flag) {
				while(l < r && start < ha[r]) r--;
				start = ha[r];
				go[start] = true;
			} else {
				while(l < r && start < ha[l]) l++;
				start = ha[l];
				go[start] = true;
			}
			flag ^= 1;
			if(l >= r) break;
		}
		vector<int> seq;
		for(int i = 1; i <= n; ++i) {
			if(go[i]) seq.push_back(vec[i]);
		}
		cout << sz(seq) << '\n';
		for(int x: seq) cout << x << ' ';
		cout << '\n';
	}
	return 0;
}