#include <bits/stdc++.h>
using namespace std;

int divide(const vector<int>::iterator& first, const vector<int>::iterator& last) {
	vector<int>::iterator it = max_element(first, last);
	if(it == first || it == last - 1) {
		return 1;
	}
	return min(divide(first, it), divide(it + 1, last)) + 1;
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
		for(int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		cout << divide(vec.begin(), vec.end()) << '\n';
	}
	return 0;
}