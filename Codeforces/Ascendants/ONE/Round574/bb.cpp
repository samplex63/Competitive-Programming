#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, k;
	cin >> n >> k;
	// chrono::time_point<chrono::high_resolution_clock> start, end;
	// start = chrono::high_resolution_clock::now();
	
	ll tot = n * (n + 1);
	tot /= 2;
	n++;
	ll ans = 0;
	while(tot != k) {
		tot -= n;
		n--;
		ans++;
	}

	cout << ans << '\n';
	// end = chrono::high_resolution_clock::now();
	// ll elapsed_time = chrono::duration_cast<chrono::milliseconds>(end - start).count();
	// cerr << "\nElapsed Time: " << elapsed_time << "ms\n";

	return 0;
}