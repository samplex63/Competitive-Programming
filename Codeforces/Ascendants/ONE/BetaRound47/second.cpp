#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	vector<ll> vec(36, 0ll);
	for(auto x: s) {
		if(islower(x)) {
			vec[x - 'a']++;
		} else {
			vec[x - '0' + 26]++;
		}
	}
	for(int i = 0; i < 36; ++i) {
		vec[i] = vec[i] * vec[i];
	}
	cout << accumulate(vec.begin(), vec.end(), 0ll);
	return 0;
}