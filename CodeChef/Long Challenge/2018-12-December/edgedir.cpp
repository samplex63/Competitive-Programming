#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unsigned int t;

	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		std::vector< pair<int, int> > graph_edge(m);
		std::vector<bool> graph_direction(m);
		std::vector<LL> graph_vertex(n + 1, 0);

		for(int i = 0; i < m; ++i) {
			cin >> graph_edge[i].first >> graph_edge[i].second;
			graph_vertex[graph_edge[i].first]++;
			graph_vertex[graph_edge[i].second]++;
		}

		if(m % 2 == 0) {

		}
	}
	return 0;
}