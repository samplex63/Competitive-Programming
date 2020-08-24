#include <bits/stdc++.h>
using namespace std;

typedef long long int LLI;

void dis(vector<LLI> v) {
	for(auto x: v)
		cout << x << ' ';
	cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	LLI n, k;
	cin >> n >> k;
	vector<LLI> vec(n);
	for(auto &x: vec) {
		cin >> x;
	}
	LLI maximum = *max_element(vec.begin(), vec.end());
	vector<LLI> vec_odd;

	for(auto &x: vec) {
		vec_odd.push_back(maximum - x);
	}

	vector<LLI> vec_even;
	maximum = *max_element(vec_odd.begin(), vec_odd.end());

	for(auto &x: vec_odd) {
		vec_even.push_back(maximum - x);
	}
	if(k == 0) {
		dis(vec);
	}
	else if(k % 2 == 1) {
		dis(vec_odd);
	}
	else {
		dis(vec_even);
	}
	return 0;
}