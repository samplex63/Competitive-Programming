#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		string name1, name2;
		cin >> name1 >> name2;

		name1 += name2;

		int n;
		cin >> n;
		string child = "";
		for(int i = 0; i < n; ++i) {
			string inp;
			cin >> inp;
			child += inp;
		}
		vector<int> vec_parent(26, 0);
		vector<int> vec_child(26, 0);

		for(auto x: name1) {
			vec_parent[x - 'a']++;
		}
		for(auto x: child) {
			vec_child[x - 'a']++;
		}

		bool flag = true;
		for(int i = 0; i < 26; ++i) {
			if(vec_child[i] > vec_parent[i]) {
				flag = false;
				break;
			}
		}
		cout << (flag? "YES\n": "NO\n");
	}
	return 0;
}