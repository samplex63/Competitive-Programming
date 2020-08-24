#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string inp;
	cin >> inp;

	vector< vector<int> > vec(10);
	for(int i = 0; i < inp.size(); ++i) {
		vec[inp[i] - '0'].emplace_back(i);
	}


	return 0;
}