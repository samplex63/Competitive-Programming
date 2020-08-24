#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;
typedef long long int LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, n, k;
	cin >> a >> n >> k;

	vector<int> vec(k);
	vec[0] = a;
	int i = 0;
	while(vec[i] > n) {
		auto res = div(vec[i], n + 1);
		vec[i] = res.rem;
		if(i == k - 1)
			break;
		i++;
		vec[i] = res.quot;
	}

	for(auto x: vec)
		cout << x << ' ';
	cout << '\n';

	return 0;
}