#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string sub, inp = "";
	while(cin >> sub) {
		inp += sub;
	}
	string s = "";
	for(int i = 0; i < (int) inp.size(); ++i) {
		if(inp[i] == 'a') {
			if(inp[i - 2] == '/') {
				s += "A";
			} else {
				s += "a";
			}
		} else if(inp[i] == 'r') {
			if(inp[i - 2] == '/') {
				s += 'R';
			} else {
				s += 'r';
			}
		} else if(inp[i] == 'd') {
			if(inp[i - 2] == '/') {
				s += 'D';
			} else {
				s += 'd';
			}
		}
	}
	cerr << s << '\n';
	vector<int> in_vec;
	int index = 0;
	int arr[5000] = {};
	for(int i = 0; i < (int) s.size(); ++i) {
		if(s[i] == 'a' && !binary_search(in_vec.begin(), in_vec.end(), i)) {
			in_vec.push_back(i);
			for(int j = i + 1; j < (int) s.size(); ++j) {
				if(s[j] == 'a') {
					while(s[j] != 'A') {
						j++;
					}
				}
				if(s[j] == 'd') {
					arr[index]++;
				}
			}
			index++;
			i = 0;
		}
	}
	sort(arr, arr + 5000);
	for(int i = 0; i < 5000; ++i) {
		if(arr[i] != 0) {
			cout << arr[i] << ' ';
		}
	}
	return 0;
}