#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		bool flag1 = true, flag2 = true;
		string str;
		cin >> str;

		string copy_str = str;
		sort(copy_str.begin(), copy_str.end());

		copy_str.erase(unique(copy_str.begin(), copy_str.end()), copy_str.end());
		if(copy_str.size() < 3) {
			cout << "Dynamic\n";
			continue;
		}
		vector< int > vec(copy_str.size());

		for(int i = 0 ; i < copy_str.size(); ++i) {
			vec[i] = count(str.begin(), str.end(), copy_str[i]);
		}
		
		sort(vec.begin(), vec.end());
		for(int i = 2; i < vec.size(); ++i) {
			if(vec[i] != vec[i - 1] + vec[i - 2]) {
				flag1 = false;
				break;
			}
		}
		if(!flag1) {
			swap(vec[0], vec[1]);
			for(int i = 2; i < vec.size(); ++i) {
				if(vec[i] != vec[i - 1] + vec[i - 2]) {
					flag2 = false;
					break;
				}
			}
		}
		cout << ((flag1 | flag2)? "Dynamic\n": "Not\n");
	}
	return 0;
}