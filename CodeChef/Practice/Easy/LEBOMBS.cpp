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
		int n;
		cin >> n;
		bool arr[n] = {};
		string inp;
		cin >> inp;
		if(inp.front() == '1') {
			arr[0] = 1;
			arr[1] = 1;
		}
		if(inp.back() == '1') {
			arr[n - 1] = 1;
			arr[n - 2] = 1;
		}
		for(int i = 1; i < n - 1; ++i) {
			if(inp[i] == '1') {
				arr[i] = 1;
				arr[i - 1] = 1;
				arr[i + 1] = 1;
			}
		}
		cout << count(arr, arr + n, 0) << '\n';
	}
	return 0;
}