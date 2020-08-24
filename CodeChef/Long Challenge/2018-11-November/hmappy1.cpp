#include<bits/stdc++.h>
using namespace std;

#define UI unsigned int

void kans(array<int, 100000> arr, UI k, UI n) {
	int temp, ans = 0;
	for(int i = 0; i < n; i++) {
		if(arr[i]) {
			temp = 0;      
			while(arr[i]) {
				temp++;
				i++;
				if(temp == k)
					break;
			}
			if(temp > ans)
				ans = temp;
		}
		if(ans == k)
			break;
	}
	cout << ans << endl;
	return;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	UI k, n, qnum, ans = 0;
	char s;
	array<int, 100000> arr;
	char temp;

	cin >> n >> qnum >> k;
	for(UI i = 0; i < n; ++i)
		cin >> arr[i];

	char q[qnum + 1];
	cin >> q;

	for(UI i = 0; i < qnum; ++i) {
		if(q[i] == '!')
			rotate(arr.begin(), arr.begin() + (n - 1), arr.begin() + n);
		else
			kans(arr, k, n);
	}
	return 0;
}