#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;
	string str, str2;
	cin >> t;
	while(t--) {
		cin >> str >> str2;
		string ans;
		for(int i = 0; i < str.size(); ++i)
			(str[i] == str2[i])? ((str[i] == 'B')? ans.push_back('W'): ans.push_back('B')): ans.push_back('B');
		cout << ans << endl;
	}
	return 0;
}