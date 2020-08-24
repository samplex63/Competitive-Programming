#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	int n;
	cin >> s >> n;
	vector<string> vec;
	for(int i = 0; i < n; ++i) {
		string inp;
		cin >> inp;
		if(inp.substr(0, (int) s.size()) == s) {
			vec.push_back(inp);
		}
	}
	if(vec.size() == 0) {
		cout << s << '\n';
	} else {
		sort(vec.begin(), vec.end());
		cout << vec.front() << '\n';
	}

	return 0;
}