#include<bits/stdc++.h>
using namespace std;

#define ULL unsigned long long int
#define LL long long int

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		string viland;
		cin >> viland;
		ULL aans = count(viland.begin(), viland.end(), 'A');
		ULL bans = count(viland.begin(), viland.end(), 'B');
		for(unsigned int i = 0; i < viland.size(); ++i) {
			if(viland[i] != '.') {
				ULL temp = 0;
				for(unsigned int j = i + 1; j < viland.size(); ++j) {
					if(viland[j] == '.') {
						temp++; 
					}
					else if(viland[i] == viland[j] && viland[i] == 'A') {
						aans += temp;
						i = j - 1;
						break;
					}
					else if(viland[i] == viland[j] && viland[i] == 'B') {
						bans += temp;
						i = j - 1;
						break;
					}
					else if(viland[i] != viland[j]) {
						i = j - 1;
						break;
					}
				}
			}
		}
		cout << aans << ' ' << bans << '\n';
	}
	return 0;
}