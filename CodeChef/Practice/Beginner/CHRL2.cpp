#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string inp;
	unsigned int c = 0, h = 0, e = 0, f = 0;

	cin >> inp;
	for(auto x: inp) {
		if(x == 'C')
			c++;
		else if(x == 'H' && h < c)
			h++;
		else if(x == 'E' && e < h)
			e++;
		else if(x == 'F' && f < e)
			f++;
	}
	cout << f << '\n';
	return 0;
}