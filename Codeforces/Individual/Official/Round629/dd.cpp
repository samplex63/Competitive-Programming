#include <bits/stdc++.h>
using namespace std;

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
		vector<int> vec(n), pr(n, -1);
		pr[0] = 1;
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		bool cnt = false;
		for(int i = 1; i < n; ++i) {
			while(i < n && vec[i - 1] == vec[i]) {
				pr[i] = pr[i - 1];
				cnt = true;
				i++;
			}
			if(i == n) break;
			pr[i] = pr[i - 1] == 1 ? 2 : 1;
		}
		if(vec.back() != vec.front() && pr[n - 1] == 1) {
			if(cnt) {
				for(int i = 0; i < n; ++i) {
					pr[i] = i % 2 + 1;
				}
				if(pr.back() == 1) {
					int st = 0;
					for(int i = 0; i < n - 1; i++) {
						if(vec[i] == vec[i + 1]) {
							st = i;
							break;
						}
					}
					pr.erase(pr.begin() + st + 1);
					pr.push_back(2);
				} 
			} else {
				pr[n - 1] = 3;
			}
		}
		cout << *max_element(all(pr)) << '\n';
		for(int i = 0; i < n; ++i) {
			cout << pr[i] << ' ';
		}
		cout << '\n';
	}
	return 0;
}