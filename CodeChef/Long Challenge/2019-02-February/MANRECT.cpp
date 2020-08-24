#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

typedef long long int ll;
const ll mxr = 1e9;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;

	while(tt--) {
		ll lower, left;
		cout << "Q 0 0" << endl;
		cin >> lower;
		cout << "Q 0 " << mxr << endl;
		cin >> left;
		
		ll leftStr;
		if(lower + left <= mxr) {
			cout << "Q 0 " << lower << endl;
			cin >> leftStr;
		}
		else {
			ll f1, f2, diff =  lower - (mxr - left);
			double main_diff = (double)diff / 2;
			if(main_diff == floor(main_diff)) {
				cout << "Q 0 " << (mxr - left) + diff / 2 << endl;
				cin >> leftStr;
			} else {
				cout << "Q 0 " << (mxr - left) + diff / 2 << endl;
				cin >> f1;
				cout << "Q 0 " << (mxr - left) + diff / 2 + 1 << endl;
				cin >> f2;
				leftStr = min(f1, f2);
			}
		}

		pair<ll, ll> leftAns, rightAns;
		leftAns.first = leftStr;
		leftAns.second = lower - leftStr;
		ll calc1, calc2;
		cout << "Q " << leftAns.first << ' ' << mxr << endl;
		cin >> calc1;
		rightAns.second = mxr - calc1;

		cout << "Q " << mxr << ' ' << leftAns.second << endl;
		cin >> calc2;
		rightAns.first = mxr - calc2;
		cout << "A " << leftAns.first << ' ' << leftAns.second << ' ' << rightAns.first << ' ' << rightAns.second << endl;
		
		cin >> calc2;
		if(calc2 != 1) {
			exit(0);
		}
	}
	return 0;
}