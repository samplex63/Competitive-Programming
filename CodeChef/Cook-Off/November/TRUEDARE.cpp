#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, tr, dr, ts, ds, num;

	cin >> t;
	while(t--) {
		bool flag = true;
		cin >> tr;

		vector<int> trvec(tr);

		std::vector<int>::iterator it;
		for(auto &x: trvec)
			cin >> x;
		cin >> dr;
		std::vector<int> drvec(dr);
		for(auto &x: drvec)
			cin >> x;
		cin >> ts;
		while(ts--) {
			cin >> num;
			if(flag) {
				auto it = find(trvec.begin(), trvec.end(), num);
				if(it == trvec.end())
					flag = false;
			}
		}
		cin >> ds;
		while(ds--) {
			cin >> num;
			if(flag) {
				auto it = find(drvec.begin(), drvec.end(), num);
				if(it == drvec.end())
					flag = false;
			}
		}
		flag? cout << "yes\n": cout << "no\n";
	}
	return 0;
}