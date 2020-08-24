#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
        cin >> n;
        cout << "1 1";
        for(int i = 0; i < n / 2; ++i) {
            cout << 0;
        }
        cout << '\n';
	}
	return 0;
}