#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

const LLI mod = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	LLI n, m, c;
	cin >> n >> m >> c;
	vector<LLI> vec_n(n);
	vector<LLI> vec_m(m);

	for(auto &x: vec_n) {
		cin >> x;
	}

	for(auto &x: vec_m) {
		cin >> x;
	}

	multiset<LLI> n_mult(vec_n.begin(), vec_n.end());
	multiset<LLI> m_mult(vec_m.begin(), vec_m.end());

	int i = 0;
	vector<LLI> vec_final(n);
	for(auto x: n_mult) {

	}

	return 0;
}