#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

vector<bool> visited((int)1e6,false);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, p, d, w;
	cin >> n >> p >> w >> d;
	ll r = p % w, diff = w - d, no_win = p / w;
	ll num = r % d;
	bool flag=true;
	ll numofsteps=0;
	while(true) {
		if(!visited[num]) {
			num = (num + diff) % d;
			visited[num] = true;
			numofsteps++;
			if(num == 0) {
				break;
			}
		} else {
			flag = false;
			break;
		}
	}
	ll pointsremain=p-(no_win-numofsteps) * w;
	cerr << no_win << " " << numofsteps << " " << pointsremain << "\n";
	if(flag) {
		if(pointsremain>=0) {
			ll no_loss,no_draw=pointsremain / d;
			no_win-=numofsteps;
			no_loss=n-no_win-no_draw;
			// cerr << no_loss;
			if(no_loss>=0) {
				cout << no_win << " " << no_draw << " " << no_loss << "\n";
			} else {
				cout << "-1";
			}
		} else {
			cout << "-1";
		}
	} else {
		cout << "-1";
	}
	return 0;
}