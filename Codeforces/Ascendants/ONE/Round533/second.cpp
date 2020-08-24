#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	string s;
	cin >> n >> k >> s;

	vector<int> h(26, 0);
	for(int i = 0; i + k <= n; ++i) {
		bool flag = true;
		for(int j = i; j < i + k - 1; ++j) {
			if(s[j] != s[j + 1]) {
				flag = false;
				i = j;
				break;
			}
		}
		if(flag) {
			h[s[i] - 'a']++;
			i += k - 1;
		}
	}

	cout << *max_element(h.begin(), h.end()) << '\n';

	return 0;
}