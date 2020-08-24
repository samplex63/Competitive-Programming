#include<bits/stdc++.h>
using namespace std;

int main() {
	unsigned int t, n, m;

	cin >> t;
	while(t--) {
		cin >> n >> m;
		unsigned long int arr[n], q = 1;

		for(auto &x: arr)
			cin >> x;

		int left[m], right[m], len[m];
		for(int i = 0; i < m; ++i) {
			cin >> left[i] >> right[i];
			len[i] = right[i] - left[i];
		}
		for(int i = 0; i < m; ++i)
			if(len[i] > 0)
				for(int j = i + 1; j < m; ++j)
					if(len[j] > 0)
						if((left[i] < right[j] || right[i] > left[j]))
							q *= 2;
		cout << "1/" << q << endl;
	}
	return 0;
}