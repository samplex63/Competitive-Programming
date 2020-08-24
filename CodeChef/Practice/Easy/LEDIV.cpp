#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

int arr_gcd(vector<int> v) {
	int ans = v[0];
	for(int i = 1; i < v.size(); ++i) {
		ans = __gcd(ans, v[i]);
	}
	return ans;
}

int smallestFactor(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return i;
		}
	}
	return n;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);

		for(auto &x: vec) {
			cin >> x;
		}

		int final_ans = arr_gcd(vec);
		if(final_ans < 2) {
			final_ans = -1;
		}
		cout << smallestFactor(final_ans) << '\n';
	}
	return 0;
}