#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t, nodays;
	string start;
	std::map<string, int> mapd;
	mapd["mon"] = 0;
	mapd["tues"] = 1;
	mapd["wed"] = 2;
	mapd["thurs"] = 3;
	mapd["fri"] = 4;
	mapd["sat"] = 5;
	mapd["sun"] = 6;

	cin >> t;
	while(t--) {
		int arr[7] = {4, 4, 4, 4, 4, 4, 4};

		cin >> nodays >> start;

		int index = mapd[start];
		for(int i = 0; i < (nodays - 28); ++i) {
			arr[index]++;
			index++;
			if(index == 7)
				index = 0;
		}
		for(auto x: arr)
			cout << x << ' ';
		cout << '\n';
	}
	return 0;
}