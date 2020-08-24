#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	vector<int> vec1(n, 0);
	vector<int> vec2(n, 0);
	for(int kk = 0; kk < k; ++kk) {
		string way;
		int index, increase;
		cin >> way >> index >> increase;

		if(way == "ColAdd") {
			vec1[index - 1] += increase;
		}
		else {
			vec2[index - 1] += increase;
		}
	}

	cout << *max_element(vec1.begin(), vec1.end()) + *max_element(vec2.begin(), vec2.end()) << '\n';
	return 0;
}