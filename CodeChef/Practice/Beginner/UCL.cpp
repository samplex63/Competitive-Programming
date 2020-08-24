#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

bool compare(pair< string, pair<int, int>> A, pair< string, pair<int, int>> B) {
	if(A.se.fi == B.se.fi) {
		return A.se.se > B.se.se;
	}
	return A.se.fi > B.se.fi;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		unordered_map< string, pair<int, int> > m;
		for(int i = 0; i < 12; ++i) {
			string one, two, vs;
			int score1, score2;
			cin >> one >> score1 >> vs >> score2 >> two;
			if(score1 == score2) {
				m[one].fi++;
				m[two].fi++;
			} else if(score1 > score2) {
				m[one].fi += 3;
				m[one].se += (score1 - score2);
				m[two].se += (score2 - score1);
			} else {
				m[two].fi += 3;
				m[two].se -= (score1 - score2);
				m[one].se -= (score2 - score1);
			}
		}
		vector< pair< string, pair<int, int> > > vec(m.begin(), m.end());
		sort(vec.begin(), vec.end(), compare);
		cout << vec[0].se << ' ' << vec[1].se << '\n';
	}
	return 0;
}