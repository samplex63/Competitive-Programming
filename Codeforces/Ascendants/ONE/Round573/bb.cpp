#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string i1, i2, i3;
	cin >> i1 >> i2 >> i3;
	int arr1[9] = {}, arr2[9] = {}, arr3[9] = {};
	if(i1.back() == 'm') {
		arr1[i1[0] - '0' - 1]++;
	} else if(i1[1] == 'p') {
		arr2[i1[0] - '0' - 1]++;
	} else if(i1[1] == 's') {
		arr3[i1[0] - '0' - 1]++;
	}

	if(i2.back() == 'm') {
		arr1[i2[0] - '0' - 1]++;
	} else if(i2[1] == 'p') {
		arr2[i2[0] - '0' - 1]++;
	} else if(i2[1] == 's') {
		arr3[i2[0] - '0' - 1]++;
	}

	if(i3.back() == 'm') {
		arr1[i3[0] - '0' - 1]++;
	} else if(i3[1] == 'p') {
		arr2[i3[0] - '0' - 1]++;
	} else if(i3[1] == 's') {
		arr3[i3[0] - '0' - 1]++;
	}

	int ans = 3 - max(max(*max_element(arr1, arr1 + 9), *max_element(arr2, arr2 + 9)), *max_element(arr3, arr3 + 9));
	int sub = 0;
	for(int i = 1; i < 8; ++i) {
		int dec = 0;
		if(arr1[i - 1]) dec++;
		if(arr1[i]) dec++;
		if(arr1[i + 1]) dec++;
		sub = max(dec, sub);
	}
	for(int i = 1; i < 8; ++i) {
		int dec = 0;
		if(arr2[i - 1]) dec++;
		if(arr2[i]) dec++;
		if(arr2[i + 1]) dec++;
		sub = max(dec, sub);
	}
	for(int i = 1; i < 8; ++i) {
		int dec = 0;
		if(arr3[i - 1]) dec++;
		if(arr3[i]) dec++;
		if(arr3[i + 1]) dec++;
		sub = max(dec, sub);
	}

	sub = 3 - sub;
	cout << min(ans, sub) << '\n';
	return 0;
}