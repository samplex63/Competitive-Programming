#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of \"" << #x << "\" is " << x << '\n'
typedef long long int LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	LLI a;
	cin >> a;
	if(a % 6 == 0 || a % 6 == 1 || a % 6 == 3) {
		cout << "yes\n";
	}
	else {
		cout << "no\n";
	}
	return 0;
}