#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

struct all_values {
	int number;
	int index;
	int comparison;
};

bool number_comparator(all_values A, all_values B) {
	return A.number < B.number;
}

bool index_comparator(all_values A, all_values B) {
	return A.index < B.index;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt = 1;
	while(tt--) {
		int n, k, p;
		cin >> n >> k >> p;

		vector<all_values> vec(n);

		for(int i = 0 ; i < n; ++i) {
			cin >> vec[i].number;
			vec[i].index = i;
		}

		stable_sort(vec.begin(), vec.end(), number_comparator);
		int cnt = 0;
		vec[0].comparison = cnt;
		for(int i = 1 ; i < n; ++i) {
			(vec[i].number - vec[i - 1].number <= k)? vec[i].comparison = cnt: vec[i].comparison = ++cnt;
		}

		stable_sort(vec.begin(), vec.end(), index_comparator);

		for(int Pcnt = 0; Pcnt < p; ++Pcnt) {
			int left, right;
			cin >> left >> right;
			cout << ((vec[left - 1].comparison == vec[right - 1].comparison)? "Yes\n": "No\n");
		}
	}
	return 0;
}