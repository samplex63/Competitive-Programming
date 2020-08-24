#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int
#define LL long long int

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		string inp, real = "chef", compare;
		bool flag = false;
		unsigned int ans = 0;
		cin >> inp;
		for(unsigned int i = 0; i < inp.size(); ++i) {
			if(inp[i] == 'c' || inp[i] == 'h' || inp[i] == 'e' || inp[i] == 'f') {
				for(int j = 0; j < 4; ++j) {
					compare.push_back(inp[i + j]);
				}
				if(is_permutation(compare.begin(), compare.end(), real.begin())) {
					flag = true;
					ans++;
				}
			}
			compare.clear();
		}
		if(flag)
			cout << "lovely " << ans << '\n';
		else
			cout << "normal\n";
	}
	return 0;
}