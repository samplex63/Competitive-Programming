#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	cout << "a1 ";
	vector<string> way;
	bool flag = true;
	char cur = 'b';
	int ind = 1;
	for(int i = 0; i < 48; ++i) {
		string app = "";
		if(flag) {
			app += cur;
			app += to_string(ind);
			cur++;
			if(cur >= 'h') {
				flag = false;
				cur = 'g';
				ind++;
			}
		} else {
			app += cur;
			app += to_string(ind);
			cur--;
			if(cur < 'a') {
				flag = true;
				cur = 'a';
				ind++;
			}
		}
		way.push_back(app);
	}
	way.push_back("h7");
	way.push_back("h6");
	way.push_back("h5");
	way.push_back("h4");
	way.push_back("h3");
	way.push_back("h2");
	way.push_back("h1");
	vector<string> way2;
	flag = true;
	cur = 'b';
	ind = 1;
	for(int i = 0; i < 54; ++i) {
		string app = "";
		if(flag) {
			app += cur;
			app += to_string(ind);
			cur++;
			if(cur > 'h') {
				flag = false;
				cur = 'h';
				ind++;
			}
		} else {
			app += cur;
			app += to_string(ind);
			cur--;
			if(cur < 'a') {
				flag = true;
				cur = 'a';
				ind++;
			}
		}
		way2.push_back(app);
	}

	way2.push_back("g8");
	way2.push_back("f8");
	way2.push_back("e8");
	way2.push_back("d8");
	way2.push_back("c8");
	way2.push_back("b8");
	way2.push_back("a8");
	if(n == 2){
		cout << "h1 ";
	} else if(n <= 50){
		for(int i = 0; i < n-2; i++){
			cout << way[i] << " ";
		}
		// cout << way3[n%8] << " ";
		cout << "h" << way[n-3][1] << ' ';
	} else if(n <= 56){
		for(int i = 0; i < n-1; i++){
			cout << way[i] << " ";
		}
	} else if(n <= 62){
		for(int i = 0; i < n-1; i++){
			cout << way2[i] << " ";
		}
	} else{
		for(int i = 0; i < sz(way2); i++){
			cout << way2[i] << ' ';
			if(way2[i] == "b6"){
				break;
			}
		}
		cout << "b7 c7 d7 e7 f7 g7 g8 f8 e8 d8 c8 b8 a8 a6 a7 h7 ";
	}
	
	cout << "h8" << '\n';
	return 0;
}