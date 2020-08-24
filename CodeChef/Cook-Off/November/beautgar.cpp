#include<bits/stdc++.h>
using namespace std;

bool beau(string garl) {
	int cnt = 0;
	if(garl[0] != garl.back())
		for(int i = 0; i < garl.size() - 1; ++i)
			if(garl[i] != garl[i + 1])
				cnt++;
	else
		return false;
	if(cnt == garl.size() - 1)
		return true;
	else
		return false;
}

int main() {
	unsigned int t;

	cin >> t;
	while(t--) {
		bool flag = false;
		string garl;
		string subgarl;
		cin >> garl;
		char R[garl.size()];
		for(auto &x: R)
			x = 'R';
		char G[garl.size()];
		for(auto &x: G)
			x = 'G';
		if(garl == R || garl == G)
			flag = true;
		else if(beau(garl))
			flag = true;
		else {
			for(int rota = 0; !flag && rota < garl.size() - 2; rota++) {
				bool trigger = false;

				if(rota != 0)
					subgarl.clear();

				rotate(garl.begin(), garl.begin() + rota, garl.end());

				for(int i = 0; i < garl.size() - 1; ++i) {
					if(garl[i] == garl[i + 1]) {
						i++;
						while(garl[i] != garl[i + 1] && i < garl.size()) {
							subgarl.push_back(garl[i]);
							i++;
							trigger = true;
						}
						i++;
						subgarl.push_back(garl[i]);
					}
					if(beau(subgarl)) {
						flag = true;
					}
					if(trigger)
						break;
				}
			}
		}
		flag? cout << "yes\n": cout << "no\n";
	}
	return 0;
}