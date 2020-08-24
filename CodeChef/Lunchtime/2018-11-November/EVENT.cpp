#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t;
	string day1, day2;
	unsigned int low, high;
	map <string, int> mapd;
	mapd.insert(pair<string, int>("saturday", 1));
	mapd.insert(pair<string, int>("sunday", 2));
	mapd.insert(pair<string, int>("monday", 3));
	mapd.insert(pair<string, int>("tuesday", 4));
	mapd.insert(pair<string, int>("wednesday", 5));
	mapd.insert(pair<string, int>("thursday", 6));
	mapd.insert(pair<string, int>("friday", 7));

	cin >> t;
	while(t--) {
		int ans, cnt = 0;

		cin >> day1 >> day2 >> low >> high;
		int correct = mapd[day1] - mapd[day2];
		if(correct > 0)
			correct = 7 - correct;
		else if(correct < 0)
			correct = -correct;

		int actdur = correct + 1;

		int remember =  high - low;
		while(actdur <= high)  {
			for(int i = low; i <= high; ++i) {
				if(i == actdur) {
					ans = i;
					cnt++;
					break;
				}
			}
			if(cnt > 1)
				break;
			actdur += 7;
		}
		if(cnt == 0)
			cout << "impossible\n";
		else if(cnt == 1)
			cout << ans << endl;
		else
			cout << "many\n";

	}
	return 0;
}