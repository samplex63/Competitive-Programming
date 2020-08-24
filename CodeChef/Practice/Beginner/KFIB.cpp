#include<bits/stdc++.h>
using namespace std;

#define LL long long int
#define ULL unsigned long long int
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ULL n, k;
	cin >> n >> k;

	if(k >= n) {
		cout << "1\n";
		return 0;
	}

	std::vector<ULL> vec(k, 1);
	int cnt = -1;

	for(unsigned int i = 0; i < n - k; ++i) {
		cnt++;
		if(cnt == k)
			cnt = 0;
		ULL subst = 0;
		for(auto x: vec)
			subst += x;
		vec[cnt] = subst;
		vec[cnt] %= MOD;
	}
	cout << vec[cnt] << '\n';
	return 0;
}