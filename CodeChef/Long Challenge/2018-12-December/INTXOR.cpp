#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;
typedef long long int LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		int n, i;
		cin >> n;
		int n_sub = n;
		std::vector<int> ans_vec;
		for(i = 1; i <= n; i += 4) {
			if(n_sub < 8 && n_sub != 4) {
				break;
			}
			int arr[4];
			cout << "1 " << i << ' ' << i + 1 << ' ' << i + 2 << endl;
			cin >> arr[0];
			cout << "1 " << i << ' ' << i + 1 << ' ' << i + 3 << endl;
			cin >> arr[1];
			cout << "1 " << i + 2 << ' ' << i + 3 << ' ' << i << endl;
			cin >> arr[2];
			cout << "1 " << i + 2 << ' ' << i + 3 << ' ' << i + 1 << endl;
			cin >> arr[3];
			ans_vec.push_back(arr[0] ^ arr[1] ^ arr[2]);
			ans_vec.push_back(arr[0] ^ arr[1] ^ arr[3]);
			ans_vec.push_back(arr[0] ^ arr[2] ^ arr[3]);
			ans_vec.push_back(arr[1] ^ arr[2] ^ arr[3]);

			n_sub -= 4;
		}

		if(n_sub == 5) {
			int arr[5];
			for(int j = 0; j < 3; ++j) {
				cout << "1 " << i + j << ' ' << i + j + 1 << ' ' << i + j + 2 << endl;
				cin >> arr[j];
			}
			cout << "1 " << i + 3 << ' ' << i + 4 << ' ' << i << endl;
			cin >> arr[3];
			cout << "1 " << i + 4 << ' ' << i << ' ' << i + 1 << endl;
			cin >> arr[4];
			ans_vec.push_back(arr[1] ^ arr[2] ^ arr[4]);
			ans_vec.push_back(arr[0] ^ arr[2] ^ arr[3]);
			ans_vec.push_back(arr[1] ^ arr[3] ^ arr[4]);
			ans_vec.push_back(arr[0] ^ arr[2] ^ arr[4]);
			ans_vec.push_back(arr[0] ^ arr[1] ^ arr[3]);
		}
		else if(n_sub == 6) {
			int arr[6];
			cout << "1 " << i << ' ' << i + 1 << ' ' << i + 2 << endl;
			cin >> arr[0];
			cout << "1 " << i << ' ' << i + 1 << ' ' << i + 3 << endl;
			cin >> arr[1];
			cout << "1 " << i + 2 << ' ' << i + 3 << ' ' << i + 4 << endl;
			cin >> arr[2];
			cout << "1 " << i + 2 << ' ' << i + 3 << ' ' << i + 5 << endl;
			cin >> arr[3];
			cout << "1 " << i + 4 << ' ' << i + 5 << ' ' << i << endl;
			cin >> arr[4];
			cout << "1 " << i + 4 << ' ' << i + 5 << ' ' << i + 1 << endl;
			cin >> arr[5];
			ans_vec.push_back(arr[2] ^ arr[3] ^ arr[4]);
			ans_vec.push_back(arr[2] ^ arr[3] ^ arr[5]);
			ans_vec.push_back(arr[0] ^ arr[4] ^ arr[5]);
			ans_vec.push_back(arr[1] ^ arr[4] ^ arr[5]);
			ans_vec.push_back(arr[0] ^ arr[1] ^ arr[2]);
			ans_vec.push_back(arr[0] ^ arr[1] ^ arr[3]);
		}
		else if(n_sub == 7) {
			int arr[7];
			for(int j = 0; j < 5; ++j) {
				cout << "1 " << i + j << ' ' << i + j + 1 << ' ' << i + j + 2 << endl;
				cin >> arr[j];
			}
			cout << "1 " << i + 5 << ' ' << i + 6 << ' ' << i << endl;
			cin >> arr[5];
			cout << "1 " << i + 6 << ' ' << i << ' ' << i + 1 << endl;
			cin >> arr[6];
			ans_vec.push_back(arr[0] ^ arr[2] ^ arr[3] ^ arr[5] ^ arr[6]);
			ans_vec.push_back(arr[0] ^ arr[1] ^ arr[3] ^ arr[4] ^ arr[6]);
			ans_vec.push_back(arr[0] ^ arr[1] ^ arr[2] ^ arr[4] ^ arr[5]);
			ans_vec.push_back(arr[1] ^ arr[2] ^ arr[3] ^ arr[5] ^ arr[6]);
			ans_vec.push_back(arr[0] ^ arr[2] ^ arr[3] ^ arr[4] ^ arr[6]);
			ans_vec.push_back(arr[0] ^ arr[1] ^ arr[3] ^ arr[4] ^ arr[5]);
			ans_vec.push_back(arr[1] ^ arr[2] ^ arr[4] ^ arr[5] ^ arr[6]);
		}
		cout << "2 ";
		for(auto &x: ans_vec) {
			cout << x << ' ';
		}
		cout << endl;
		cin >> i;
	}
	return 0;
}