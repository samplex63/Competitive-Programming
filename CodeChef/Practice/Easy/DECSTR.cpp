#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string zToa;
	for(int i = 25; i >= 0; --i) {
		zToa.push_back((char)i + 'a');
	}

	int tt;
	cin >> tt;
	while(tt--) {
		int k;
		cin >> k;

		int after = k % 25;
		string last_ans;
		for(int i = after; i >= 0; --i) {
			last_ans.push_back((char)i + 'a');
		}
		if(after == 0) {
			last_ans.pop_back();
		}
		string final_ans;
		int start = k / 25;
		for(int i = 0; i < start; ++i) {
			final_ans += zToa;
		}

		final_ans = last_ans + final_ans;
		cout << final_ans << '\n';
	}
	return 0;
}