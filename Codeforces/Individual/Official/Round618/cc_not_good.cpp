#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

template <typename A, typename B> string to_string(pair<A, B> p);
template <typename A, typename B, typename C> string to_string(tuple<A, B, C> p);
string to_string(const string& s) { return '"' + s + '"'; }
string to_string(const char* s) { return to_string((string) s); }
string to_string(bool b) { return (b ? "true" : "false"); }
string to_string(vector<bool> v) {
	bool first = true;
	string res = "{";
	for (int i = 0; i < static_cast<int>(v.size()); i++) {
		if (!first) {
			res += ", ";
		}
		first = false;
		res += to_string(v[i]);
	}
	res += "}";
	return res;
}
template <size_t N>
string to_string(bitset<N> v) {
	string res = "";
	for (size_t i = 0; i < N; i++) {
		res += static_cast<char>('0' + v[i]);
	}
	return res;
}
template <typename A>
string to_string(A v) {
	bool first = true;
	string res = "{";
	for (const auto &x : v) {
		if (!first) {
			res += ", ";
		}
		first = false;
		res += to_string(x);
	}
	res += "}";
	return res;
}
template <typename A, typename B>
string to_string(pair<A, B> p) { return "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; }
template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
	return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}
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
	vector<pair<int, bool>> vec(n);
	for(int i = 0 ; i < n; ++i) {
		cin >> vec[i].fi;
		vec[i].se = true;
	}

	sort(vec.begin(), vec.end());
	vector<int> ans = {vec[n - 1].fi};
	int cur = vec[n - 1].fi, start = 0;
	vec[n - 1].se = false;

	while(start < n && sz(ans) < n) {
		while(start < n && !vec[start].se) {
			start++;
		}
		bool flag = true;
		for(int i = start; i < n; ++i) {
			if(!vec[i].se) continue;
			if((cur & vec[i].fi) == 0) {
				ans.push_back(vec[i].fi);
				vec[i].se = false;
				flag = false;
			}
		}
		if(!flag) {
			for(int i = 0; i < n; ++i) {
				if(vec[i].se) ans.push_back(vec[i].fi);
			}
			break;
		}
		while(start < n && !vec[start].se) {
			start++;
		}
		ans.push_back(vec[start++].fi);
		cur = (cur | vec[start].fi) - vec[start].fi;
	}
	for(int i = 0; i < n; ++i) {
		cout << ans[i] << ' ';
	}
	cout << '\n';

	// auto fun = [](int a, int b) {
	// 	return (a | b) - b;
	// };
	// int one = fun(vec[0], vec[1]);
	// cerr << one << '\n';
	// for(int i = 2; i < n; ++i) {
	// 	one = fun(one, vec[i]);
	// 	cerr << one << '\n';
	// }
	// // cout << one << '\n';
	return 0;
}