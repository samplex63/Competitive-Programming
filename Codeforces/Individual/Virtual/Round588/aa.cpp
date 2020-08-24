#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> vec(4);
	cin >> vec[0] >> vec[1] >> vec[2] >> vec[3];
	sort(vec.begin(), vec.end());
	if((vec[0] + vec[3]) == (vec[1] + vec[2])) {
		cout << "YES\n";
	} else if(vec[0] + vec[1] + vec[2] == vec[3]) {
		cout << "YES";
	} else {
		cout << "NO\n";
	}
	return 0;
}