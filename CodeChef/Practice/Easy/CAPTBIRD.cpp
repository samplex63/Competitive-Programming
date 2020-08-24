#include <bits/stdc++.h>
using namespace std;

#define first fi
#define second se

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;
typedef long double LD;
typedef pair< int, int > PII;

inline int dist2P(PII X, PII Y) {
	int xDiff = X.fi - Y.fi;
	int yDiff = X.se - Y.se;
	return xDiff * xDiff + yDiff * yDiff;
}

LD getAngle(PII A, PII B, PII C) {
	int a2 = dist2P(B,C);
	int b2 = dist2P(A,C);
	int c2 = dist2P(A,B);

	LD a = sqrt(a2);
	LD b = sqrt(b2);
	LD c = sqrt(c2);
 
	return (LD) acos((a2 + c2 - b2) / (2 * a * c));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<int> vec(n);
		for(auto &x: vec) {
			cin >> x;
		}

		sort(vec.begin(), vec.end());

		PII bird;
		cin >> bird.fi >> bird.se;

		LD ans = 0;

		for(int i = 0; i < n / 2; ++i) {
			PII first_coor = make_pair(vec[i], 0);
			PII last_coor = make_pair(vec[n - 1 - i], 0);

			ans += getAngle(first_coor, bird, last_coor);
		}
		cout << setprecision(12) << fixed << ans << '\n';

	}
	return 0;
}