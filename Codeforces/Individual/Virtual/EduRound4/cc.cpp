#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string inp;
	cin >> inp;
	int n = sz(inp);
	string op = "{[(<";
	string cl = "}])>";

	set<char> s(op.begin(), op.end());
	string st;
	bool flag = true;
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		if(s.count(inp[i])) {
			st.push_back(inp[i]);
			continue;
		}
		if(st.empty()) {
			flag = false;
			break;
		}
		char y = st.back();
		int opener_index = find(op.begin(), op.end(), y) - op.begin();
		int closer_index = find(cl.begin(), cl.end(), inp[i]) - cl.begin();

		if(opener_index != closer_index) {
			ans++;
		}
		st.pop_back();
	}
	flag &= st.empty();
	if(!flag) {
		cout << "Impossible\n";
	} else {
		cout << ans << '\n';
	}

	return 0;
}