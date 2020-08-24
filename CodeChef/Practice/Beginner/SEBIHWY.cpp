#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, s, sg, fg, d, time;

	cin >> t;
	while(t--) {
		cin >> s >> sg >> fg >> d >> time;
		d *= 50 * 18;
		time *= 5;
		double actspd = (double)d / time;
		actspd += s;

		cerr << "ERROR A: " << actspd << '\n';

		if(abs(actspd - sg) < abs(actspd - fg))
			cout << "SEBI\n";
		else if(abs(actspd - sg) > abs(actspd - fg))
			cout << "FATHER\n";
		else
			cout << "DRAW\n";
	}
	return 0;
}