#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int noofcount = INT_MAX, sub1, sub2;

		std::vector < bool > vec(n + 1, true);
		std::vector<int> notans;
		std::vector<int> pavec;

		vec[0] = false;

		int third, fourth;
		while(1) {
			noofcount = count(vec.begin(), vec.end(), true);
			if(noofcount < 5)
				break;
			cout << "? ";
			int cnt = 0;
			for(int i = 1; i <= n; ++i) {
				if(vec[i] == true) {
					cout << i << ' ';
					cnt++;
					if(cnt >= 5) {
						break;
					}
				}
			}
			cout << endl;

			cin >> third >> fourth;
			notans.push_back(third);
			notans.push_back(fourth);
			vec[third] = false;
			vec[fourth] = false;
		}

		if(noofcount == 4) {
			cout << "? " << notans[0] << ' ';
			for(int i = 1; i <= n; ++i) {
				if(vec[i] == true) {
					cout << i << ' ';
				}
			}
			cout << endl;
			cin >> third >> fourth;
			vec[third] = false;
			vec[fourth] = false;
			notans.push_back(third);
			notans.push_back(fourth);
			sort(notans.begin(), notans.end());
			notans.erase(unique(notans.begin(), notans.end()), notans.end());
		}

		for(int i = 1; i <= n; ++i) {
			if(vec[i] == true) {
				pavec.push_back(i);
			}
		}

		std::vector< pair<int, int> > check(3);

		cout << "? " << pavec[0] << ' ' << pavec[1] << ' ';
		for(int i = 0; i < 3; ++i) {
			cout << notans[i] << ' ';
		}
		cout << endl;
		cin >> check[2].first >> check[2].second;

		cout << "? " << pavec[1] << ' ' << pavec[2] << ' ';
		for(int i = 0; i < 3; ++i) {
			cout << notans[i] << ' ';
		}
		cout << endl;
		cin >> check[0].first >> check[0].second;


		cout << "? " << pavec[0] << ' ' << pavec[2] << ' ';
		for(int i = 0; i < 3; ++i) {
			cout << notans[i] << ' ';
		}
		cout << endl;
		cin >> check[1].first >> check[1].second;

		if(check[0] == check[1]) {
			cout << "! " << pavec[2] << endl;
		}
		else if(check[1] == check[2]) {
			cout << "! " << pavec[0] << endl;
		}
		else {
			cout << "! " << pavec[1] << endl;
		}
	}
	return 0;
}