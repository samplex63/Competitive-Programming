#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif

	int n;
	cin >> n;
	vector<int> vec(n);
	for(auto &x: vec) {
		cin >> x;
	}
	
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());
	if(vec.size() == 1) {
		cout << "0\n";
	} else {
		cout << vec[vec.size() - 2] << '\n';
	}

	return 0;
}