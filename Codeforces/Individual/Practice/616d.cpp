#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }
int arr[(int) 1e6 + 2] = {};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	// memset(arr, sizeof(arr), 0);
	// cerr << "1 ";
	vector<int> vec(n);
	// fill(arr)
	for(int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	arr[vec[0]]++;
	int r = 0, l = 0;
	int tot = 1;
	int left_ans = 0, right_ans = 0;
	while(r < n - 1) {
		// cerr << l << ' ' << r << '\n';
		if(tot < k || (tot == k && arr[vec[r + 1]] > 0)) {
			// cerr << r << '\n';
			r++;
			tot += (arr[vec[r]] == 0);
			arr[vec[r]]++;
		} else {
			tot -= (arr[vec[l]] == 1);
			arr[vec[l]]--;
			l++;
		}
		if((right_ans - left_ans < r - l)) {
			left_ans = l;
			right_ans = r;
		}
	}
	// cerr << "1 ";
	cout << left_ans + 1 << ' ' << right_ans + 1 << '\n';
	return 0;
}