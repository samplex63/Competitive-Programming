#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	bool arr[n] = {};
	for(int i = 0; i < k; ++i) {
		string str;
		cin >> str;
		if(str.back() == 'K') {
			int num;
			cin >> num;
			arr[num - 1] = !arr[num - 1];
			cout << count(arr, arr + n, true) << '\n';
		}
		else {
			memset(arr, false, sizeof(arr));
			cout << "0\n";
		}
	}
	return 0;
}