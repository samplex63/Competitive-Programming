#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ULL;
typedef long long int LL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, r, x;
	cin >> n >> r;
	while(n--) {
		cin >> x;
		if(x < r)
			cout << "Bad boi\n";
		else
			cout << "Good boi\n";
	}
	return 0;
}