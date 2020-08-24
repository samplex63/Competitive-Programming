#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	cin.ignore();
	while(t--) {
		string str;
		getline(cin, str);

		regex reg("\\s+");

		sregex_token_iterator iter(str.begin(), str.end(), reg, -1);
		sregex_token_iterator end;

		vector<string> vec(iter, end);

		if(find(vec.begin(), vec.end(), "not") != vec.end()) {
			cout << "Real Fancy\n";
		}
		else {
			cout << "regularly fancy\n";
		}
	}
	return 0;
}