#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, si, ti, ans = 0, check, player, sums = 0, sumt = 0, trigger;
	cin >> n;
	while(n--) {
		cin >> si >> ti;
		sums += si;
		sumt += ti;
		check = sums - sumt;
		player = 1;
		if(check < 0) {
			check *= -1;
			player = 2;
		}
		if(check > ans) {
			ans = check;
			trigger = player;
		}
	}
	cout << trigger << " " << ans << endl;
	return 0;
}