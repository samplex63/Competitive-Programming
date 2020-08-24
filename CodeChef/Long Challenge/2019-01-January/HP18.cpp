#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		int n, a, b;
		cin >> n >> a >> b;
		int ans_a = 0;
		int ans_b = 0;
		int ans_both = 0;
		while(n--) {
			int x;
			cin >> x;
			if((x % a == 0) && (x % b == 0)) {
				ans_both++;
			}
			else if(x % a == 0) {
				ans_a++;
			}
			else if(x % b == 0) {
				ans_b++;
			}
		}
		bool flag = true;
		
		if(ans_both == 0) {
			if(ans_a == 0 || ans_a <= ans_b) {
				flag = false;
			}
		}
		else {
			if(ans_a < ans_b) {
				flag = false;
			}
		}
		flag? cout << "BOB\n": cout << "ALICE\n";
	}
	return 0;
}