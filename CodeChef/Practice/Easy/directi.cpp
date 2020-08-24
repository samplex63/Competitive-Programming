#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << endl
typedef long long int LLI;

string flipout(string &a) {
	if(a == "Left") {
		return "Right";
	}
	return "Left";
}

int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		cin.ignore();

		vector<string> vec(n);
		vector<string> direction(n);

		for(int i = 0; i < n; ++i) {
			char ok[60], ok2[60];
			scanf("%s on %[^\n]s", ok, ok2);
			direction[i] = ok;
			vec[i] = ok2;
		}

		cout << "Begin on " << vec[n - 1] << endl;

		for(int i = n - 2; i >= 0; --i) {
			cout << flipout(direction[i + 1]) << " on " << vec[i] << endl;
		}
		cout << endl;
	}
	return 0;
}