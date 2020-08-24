#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<char> a, b, c;
	a.push_back('l');
	a.push_back('o');
	a.push_back('o');
	a.push_back('k');
	
	b.push_back('o');
	b.push_back('k');
	b.push_back('s');
	for(auto x: a) {
		cout << x;
	}
	cout << '\n';
	for(auto x: b) {
		cout << x;
	}
	cout << '\n';

	// sort(b.begin(), b.end());
	// set_union(a.begin(), a.end(), b.begin(), b.end(), c.begin());
	for(auto x: c) {
		cout << x;
	}

	return 0;
}