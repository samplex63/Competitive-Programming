#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

bool max_no(vector<pair<int, int>> &vec, bool flag) {
	if(flag) {
		if(vec.back().first == -1) {
			return false;
		} else {
			vec.pop_back();
			return true;
		}
	} else {
		int number = -1;
		int erasal = -1;
		for(int i = 0; i < vec.size(); ++i) {
			if(vec[i].second > number) {
				number = vec[i].second;
				erasal = i;
			}
		}
		if(erasal == -1) {
			return false;
		} else {
			vec.erase(vec.begin() + erasal);
			return true;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		int n, a, b;
		cin >> n >> a >> b;
		std::vector<int> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}
		std::vector<pair<int, int>> vec_ans(n);
		for(int i = 0; i < n; ++i) {
			vec_ans[i].first = -1;
			vec_ans[i].second = -1;
		}

		for(int i = 0; i < n; ++i) {
			if(vec[i] % a == 0) {
				vec_ans[i].first = vec[i] / a;
			} else if(vec[i] % b == 0) {
				vec_ans[i].second = vec[i] / b;
			}
		}
		sort(vec_ans.begin(), vec_ans.end());

		bool flag = true;
		while(1) {
			if(!max_no(vec_ans, flag)) {
				break;
			}
			flag = !flag;
		}
		flag? cout << "ALICE\n": cout << "BOB\n";
	}
	return 0;
}