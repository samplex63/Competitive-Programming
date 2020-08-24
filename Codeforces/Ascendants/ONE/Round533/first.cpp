#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vec(n);
	int sum = 0;
	for(auto& x: vec) {
		cin >> x;
		sum += x;
	}

	sort(vec.begin(), vec.end());


	// int upp = ceil((double) sum / n);
	// int loww = sum / n;

	int upp = vec[n / 2] + 1;
	int loww = vec[n / 2] - 1;
	int midd = vec[n / 2];

	// cerr << upp << ' ' << loww << '\n';

	int cost1 = 0, cost2 = 0, cost3 = 0;
	for(int i = 0; i < n; ++i) {
		if(vec[i] > upp) {
			cost1 += vec[i] - upp - 1;
		} else if(vec[i] < upp) {
			cost1 += upp - vec[i] - 1;
		}

		if(vec[i] > loww) {
			cost2 += vec[i] - loww - 1;
		} else if(vec[i] < loww) {
			cost2 += loww - vec[i] - 1;
		}

		if(vec[i] > midd) {
			cost3 += vec[i] - midd - 1;
		} else if(vec[i] < midd) {
			cost3 += midd - vec[i] - 1;
		}
	}

	if(cost1 < cost2 && cost1 < cost3) cout << upp << ' ' << cost1 << '\n';
	else if(cost2 < cost1 && cost2 < cost3) cout << loww << ' ' << cost2 << '\n';
	else cout << midd << ' ' << cost3 << '\n';
	// if(cost1 < cost2) cout << upp << ' ' << cost1 << '\n';
	// else cout << loww << ' ' << cost2 << '\n';

	return 0;
}