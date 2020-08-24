#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;

	cin >> t;
	cin.ignore();
	while(t--) {
		string str;
		getline(cin, str);

		regex reg("\\s+");

		sregex_token_iterator iter(str.begin(), str.end(), reg, -1);
		sregex_token_iterator end;

		vector<string> vec(iter, end);

		for(int i = 0; i < (vec.size() - 1); ++i) {
			cout << (char) toupper(vec[i].front()) << ". ";
		}
		cout << (char) toupper(vec.back().front());
		for(int i = 1; i < vec.back().size(); ++i) {
			cout << (char) tolower(vec.back()[i]);
		}
		cout << endl;
	}
	return 0;
}