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
		cin >> garl;
		string copy = garl;
		vector<int> vec(garl.size());
		for(int i = 0; i < garl.size(); i++)
			vec[i] = garl[i];
		copy.erase(unique(copy.begin(), copy.end()), copy.end());
		if(copy.size() == garl.size() && (copy.size() - garl.size()) % 2 == 0) {
			rotate(copy.begin(), copy.begin() + 1, copy.end());
			copy.erase(unique(copy.begin(), copy.end()), copy.end());
			if(copy.size() == garl.size() && (copy.size() - garl.size()) % 2 == 0)
				flag = true;
		}
		if(!flag) {
			adjacent_difference (vec.begin(), vec.end() + 7, vec.begin());
			if(count(garl.begin(), garl.end(), 0) == 2)
				flag = true;
		}
		flag? cout << "yes\n": cout << "no\n";
	}
	return 0;
}