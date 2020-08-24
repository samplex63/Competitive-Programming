#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

double dist(pii a, pii b) {
	return sqrt((double) (((b.first - a.first) * (b.first - a.first)) + ((b.second - a.second) * (b.second - a.second))));
}
bool isDoubleEqual(double a, double b) {
	return abs(a - b) < 1e-9;
}

double prob(double r, double d) {
	if(d <= r) return 1;
	if(isDoubleEqual(d, r)) return 1;
	return exp(1 - ((d * d) / (r * r)));
}

bool comp(pair<double, pii> a, pair<double, pii> b) {
	return a.first < b.first;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cout << setprecision(10) << fixed;

	int n, k, epi;
	cin >> n >> k >> epi;
	pii start;
	cin >> start.first >> start.second;
	vector<pair<double, pii>> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i].second.first >> vec[i].second.second;
		vec[i].first = dist(start, vec[i].second);
	}
	sort(vec.begin(), vec.end(), comp);
	double lo = 0.0, hi = vec[k - 1].first, epis = (double) epi / 1000;
	double curr = 0.0;
	while(!isDoubleEqual(curr, epis)) {
		double mid = lo + hi, cas = 1.0;
		mid /= 2.0;
		for(int i = 0; i < n; ++i) {
			cas *= prob(mid, vec[i].first);
		}
		if(isDoubleEqual(cas, epis)) {
			curr = epis;
			break;
		} else if(cas > epis) {
			hi = mid;
		} else {
			lo = mid;
		}
	}
	cout << curr << '\n';
	return 0;
}