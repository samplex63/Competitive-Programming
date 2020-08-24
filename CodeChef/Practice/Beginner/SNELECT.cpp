#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;
	string inpline;
	cin >> t;
	while(t--) {
		cin >> inpline;
		int nsnakes = count(inpline.begin(), inpline.end(), 's');
		int nmon = count(inpline.begin(), inpline.end(), 'm');
		for(int i = 0; i < (inpline.size() - 1); ++i) {
			if(inpline[i] != inpline[i + 1]) {
				nsnakes--;
				i++;
			}
		}
		if(nsnakes == nmon)
			cout << "tie\n";
		else if(nsnakes > nmon)
			cout << "snakes\n";
		else
			cout << "mongooses\n";
	}
	return 0;
}