#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t, n;

	cin >> t;
	while(t--) {
		string team1 = "", team2 = "";
		cin >> n;
		std::vector<string> vec(n);
		for(auto &x: vec) {
			cin >> x;
			if(team1 == "")
				team1 = x;
			else if(team2 == "" && team1 != x)
				team2 = x;
		}
		int goals = count(vec.begin(), vec.end(), team1);
		if(goals > (float)n / 2)
			cout << team1 << '\n';
		else if(goals == (float)n / 2)
			cout << "Draw\n";
		else 
			cout << team2 << '\n';
	}
	return 0;
}