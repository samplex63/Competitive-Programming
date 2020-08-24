#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isRo(const string &a, const string &b) {
	string sub = b;
	for(int i = 0; i < 4; ++i) {
		if(sub == a) return true;
		rotate(sub.begin(), sub.begin() + 1, sub.end());
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<string> vec(n);
	for(int i = 0; i < n; ++i) {
		string a, b, c;
		cin >> a >> b >> c;
		reverse(b.begin(), b.end());
		vec[i] = a + b;
	}

	vector<string> sol;
	sol.push_back(vec[0]);

	for(int i = 1; i < n; ++i) {
		bool flag = false;
		for(int j = 0; j < (int) sol.size(); ++j) {
			if(isRo(vec[i], sol[j])) {
				flag = true;
				break;
			}
		}
		if(!flag) sol.push_back(vec[i]);
	}
	cout << sol.size();
	return 0;
}