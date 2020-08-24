#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

struct racer {
	string name;
	int score;
};

int n;
bool isLess(racer a, racer b) {
	if(a.score == b.score) return a.name > b.name;
	return a.score < b.score;
}

int max_ans_sol(const vector<racer>& vec, const vector<int>& points, const string& self) {
	vector<int> pp(points);
	vector<racer> v(vec);
	int ori, changed;
	for(int i = 0; i < n; ++i) {
		if(v[i].name == self) {
			v[i].score += pp.back();
			ori = i;
			pp.pop_back();
			sort(v.begin(), v.end(), isLess);
			for(int j = 0; j < n; ++j) {
				if(v[j].name == self) {
					changed = j;
					break;
				}
			}
			break;
		}
	}
	int max_ans = n - changed;
	int curr = changed - 1;

	int start = 0, end = changed - ori;
	// cerr << start << ' ' << end << ' ' << curr << ' ' << max_ans << ' ' << ori << ' ' << changed << endl;
	while(start < end) {
		// cerr << start << ' ' << end << endl;
		racer sub = v[curr];
		sub.score += pp[start];
		if(isLess(sub, v[changed])) {
			start++;
		} else {
			max_ans++;
			end--;
		}
		curr--;
	}
	return max_ans;
}

int min_ans_sol(const vector<racer>& vec, const vector<int>& points, const string& self) {
	vector<int> pp(points);
	vector<racer> v(vec);

	sort(pp.rbegin(), pp.rend());
	int ori, changed;
	for(int i = 0; i < n; ++i) {
		if(v[i].name == self) {
			v[i].score += pp.back();
			ori = i;
			pp.pop_back();
			sort(v.begin(), v.end(), isLess);
			for(int j = 0; j < n; ++j) {
				if(v[j].name == self) {
					changed = j;
					break;
				}
			}
			break;
		}
	}
	int min_ans = n - changed;
	int curr = n - 1;

	int start = 0, end = changed - ori;
	// cerr << start << ' ' << end << ' ' << curr << ' ' << min_ans << ' ' << ori << ' ' << changed << endl;
	while(start < end) {
		// cerr << start << ' ' << end << endl;
		racer sub = v[curr];
		sub.score += pp[start];
		if(isLess(sub, v[changed])) {
			start++;
		} else {
			min_ans--;
			end--;
		}
		curr--;
	}
	return min_ans;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	vector<racer> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i].name >> vec[i].score;
	}
	int m;
	cin >> m;
	vector<int> points(m);
	for(int i = 0; i < m; ++i) {
		cin >> points[i];
	}
	while((int) points.size() < n) points.push_back(0);
	sort(vec.begin(), vec.end(), isLess);
	sort(points.begin(), points.end());
	string self;
	cin >> self;


	// for(int i = 0; i < n; ++i) {
	// 	cerr << vec[i].name << ' ' << vec[i].score << endl;
	// }
	cout << max_ans_sol(vec, points, self) << ' ' << min_ans_sol(vec, points, self);
	return 0;
}