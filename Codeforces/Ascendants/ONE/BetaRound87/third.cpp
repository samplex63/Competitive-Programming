#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vec(n), hei(n, 0);
	vector<bool> sen(n, true);
	vector<int> que;
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
		if(vec[i] == -1) {
			hei[i] = 1;
			sen[i] = false;
			que.push_back(i + 1);
		}
	}
	for(int i = 0; i < n; ++i) {
		vector<int> sub;
		for(int k = 0; k < n; ++k) if(sen[i]) {
			auto it = find(que.begin(), que.end(), vec[k]);
			if(it != que.end()) {
				sub.push_back(*it + 1);
				sen[i] = false;
				hei[k] = hei[vec[k] + 1] + 1;
			}
		}
		for(int k = 0; k < (int) sub.size(); ++k) {
			que.push_back(sub[i]);
		}
	}
	cout << *max_element(hei.begin(), hei.end()) << '\n';
	return 0;
}