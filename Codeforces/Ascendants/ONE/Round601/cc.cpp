#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

string to_string(const string& s) { return '"' + s + '"'; }
string to_string(const char* s) { return to_string((string) s); }
string to_string(bool b) { return (b ? "true" : "false"); }
string to_string(vector<bool> v) {
	bool first = true;
	string res = "{";
	for(int i = 0; i < static_cast<int>(v.size()); i++) {
	    if (!first) res += ", ";
		first = false;
		res += to_string(v[i]);
	}
	res += "}";
	return res;
}
template <size_t N>
string to_string(bitset<N> v) {
	string res = "";
	for(size_t i = 0; i < N; i++) res += static_cast<char>('0' + v[i]);
	return res;
}
template <typename A>
string to_string(A v) {
	bool first = true;
	string res = "{";
	for(const auto &x : v) {
		if (!first) res += ", ";
		first = false;
		res += to_string(x);
	}
	res += "}";
	return res;
}
template <typename A, typename B>
string to_string(pair<A, B> p) { return "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; }
void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
	cerr << " " << to_string(H);
	debug_out(T...);
}
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector< vector< pair<int, int> > > vec(n + 2);
	for(int i = 0; i < n - 2; ++i) {
		int x, y, z;
		cin >> x >> y >> z;
		vec[x].emplace_back(y, z);
		vec[y].emplace_back(x, z);
		vec[z].emplace_back(x, y);
	}

	vector<bool> done(n + 2, false);
	vector<int> ans;
	int ind = 1;
	for(int i = 1; i <= n; ++i) {
		if(sz(vec[i]) == 1) {
			ind = i;
			ans.push_back(i);
			done[i] = true;
			break;
		}
	}
	int x = vec[ind][0].fi;
	int y = vec[ind][0].se;
	if(sz(vec[x]) == 2) {
		done[x] = true;
		ans.push_back(x);
	} else {
		done[y] = true;
		ans.push_back(y);
	}

	for(int i = 1; i < n - 1; ++i) {
		vector<pair<int, int>> temp = vec[ans[i]];
		for(int j = 0; j < sz(temp); ++j) {
			int xx = temp[j].fi, yy = temp[j].se;
			if(xx == ans[i - 1] && !done[yy]) {
				ans.push_back(yy);
				done[yy] = true;
				break;
			}
			if(yy == ans[i - 1] && !done[xx]) {
				ans.push_back(xx);
				done[xx] = true;
				break;
			}
		}
	}
	debug(ans, 1, x, y);
	for(int i = 0; i < sz(ans); ++i) {
		cout << ans[i] << ' ';
	}
	cout << '\n';
	return 0;
}

/*
5
4 3 2
2 3 5
4 1 2
*/