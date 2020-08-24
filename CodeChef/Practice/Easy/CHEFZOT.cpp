#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;

	vector<int> vec(n);
	for(auto &x: vec) {
		cin >> x;
	}
	int ans = 0;
	vector<int> ans_vec;
	for(auto x: vec) {
		if(x != 0) {
			ans++;
		}
		else {
			ans_vec.push_back(ans);
			ans = 0;
		}
	}
	ans_vec.push_back(ans);
	cout << *max_element(ans_vec.begin(), ans_vec.end()) << '\n';
	return 0;
}