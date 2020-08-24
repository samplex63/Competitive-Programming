#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;
	int n, rnum, gnum, bnum;
	string instr;
	cin >> t;
	while(t--) {
		cin >> n;
		cin >> instr;
		rnum = count(instr.begin(), instr.end(), 'R');
		gnum = count(instr.begin(), instr.end(), 'G');
		bnum = count(instr.begin(), instr.end(), 'B');
		cout << n - max(max(rnum, gnum), bnum) << endl;
	}
	return 0;
}