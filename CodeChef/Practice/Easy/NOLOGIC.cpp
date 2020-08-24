#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	cin.ignore();
	while(tt--) {
		string inp;
		getline(cin, inp);

		vector<bool> vec(26, false);
		for(auto x: inp) {
			if(x >= 'A' && x <= 'Z') {
				vec[x - 'A'] = true;
			}
			else if(x >= 'a' && x <= 'z') {
				vec[x - 'a'] = true;
			}
		}

		string ans = "";
		for(int i = 0; i < vec.size(); ++i) {
			if(!vec[i]) {
				ans.push_back(i + 'a');
			}
		}
		if(ans == "") {
			ans.push_back('~');
		}
		cout << ans << '\n';
	}
	return 0;
}