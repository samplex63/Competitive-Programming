#include<bits/stdc++.h>
using namespace std;

#define LL long long int
#define ULL unsigned long long int

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t, n;

	cin >> t;
	for(int i = 1; i <= t; ++i) {
		cin >> n;
		LL first[n] = {}, second[n] = {}, andval = 65535;
		for(int j = 0; j < n; ++j) {
			cin >> first[j];
			second[j] = first[j] & andval;
			first[j] = first[j] >> 16;
		}
		cout << "Case " << i << ":\n";
		for(int j = 0; j < n; ++j)
			cout << second[j] << ' ';
		cout << '\n';
		for(int j = 0; j < n; ++j)
			cout << first[j] << ' ';
		cout << '\n';		
	}
	return 0;
}