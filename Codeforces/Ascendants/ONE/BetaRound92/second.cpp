#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << setprecision(10) << fixed;

	int n, k;
	cin >> n >> k;
	vector<pair<int, bool>> vec(n);
	for(auto& x: vec) {
		cin >> x.first;
		x.second = true;
	}

	int q;
	cin >> q;
	vector<double> ans;
	set<vector<int>> ss;
	int ques = n / k;
	for(int qq = 0; qq < q; ++qq) {
		vector<int> numvec(ques);
		int sum = 0;
		for(auto& x: numvec) {
			cin >> x;
			sum += vec[x - 1].first;
			vec[x - 1].second = false;
		}
		sort(numvec.begin(), numvec.end());
		ss.insert(numvec);
		ans.push_back((double) sum / ques);
	}
	// cout << ss.size() << '\n';
	// for(auto x: vec) {
	// 	cout << x.first << ' ' << x.second << '\n';
	// }
	sort(vec.begin(), vec.end());
	int cnt = 0, sum = 0;
	
	for(int i = 0; i < n; ++i) {
		if(vec[i].second) {
			cnt++;
		}
	}
	if(cnt >= ques && (int) ss.size() < k) {
		cnt = 0;
		vector<int> dddd;
		for(int i = 0; i < n; ++i) {
			if(vec[i].second) {
				cnt++;
				sum += vec[i].first;
				dddd.push_back(vec[i].first);
			}
			if(cnt >= ques) {
				sort(dddd.begin(), dddd.end());
				ss.insert(dddd);
				break;
			}
		}
		ans.push_back((double) sum / ques);
		cnt = 0, sum = 0;
		// if((int) ss.size() < k) {
			for(int i = n - 1; i >= 0; --i) {
				if(vec[i].second) {
					cnt++;
					sum += vec[i].first;
				}
				if(cnt >= ques) break;
			}
			ans.push_back((double) sum / ques);
		// }
	}
	sort(ans.begin(), ans.end());
	// for(auto x: ans) {
	// 	cerr << x << ' ';
	// }
	// cerr << '\n';
	cout << ans.front() << ' ' << ans.back();
	return 0;
}