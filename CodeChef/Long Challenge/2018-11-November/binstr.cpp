#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int

int main() {
	int n, q, lin, rin;
	ULL x, value, maxvalue;
	int ans;
	string binip;

	cin >> n >> q;
	ULL arr[n + 1];
	for(int i = 1; i <= n; ++i) {
		cin >> binip;
		arr[i] = bitset<64>(binip).to_ullong();
	}
	while(q--) {
		maxvalue = 0;
		cin >> lin >> rin >> binip;
		x = bitset<64>(binip).to_ullong();
		ans = lin;
		for(int i = lin; i <= rin; ++i) {
			value = x ^ arr[i];
			if(value > maxvalue) {
				ans = i;
				maxvalue = value;
			}
		}
		cout << ans << endl;
	}
	return 0;
}