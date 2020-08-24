#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) (int) (x).size()

typedef long long ll;
typedef long double ld;

const double PI = acos(-1.0);

string to_string(string s) {
	return '"' + s + '"';
}

string to_string(const char* s) {
	return to_string((string) s);
}

string to_string(bool b) {
	return (b ? "true": "false");
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
	return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A>
string to_string(A v) {
	bool first = true;
	string res = "{";
	for (auto x: v) {
		if (!first) {
			res += ", ";
		}
		first = false;
		res += to_string(x);
	}
	res += "}";
	return res;
}

void debug_out() {
	cerr << endl;
}

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
	cerr << " " << to_string(H);
	debug_out(T...);
}

#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)

struct circle {
	double x, y, r;
};

double dist(circle a, circle b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	circle a, b;
	cin >> a.x >> a.y >> a.r >> b.x >> b.y >> b.r;
	double d = dist(a, b);

	if(d < a.r + b.r) {
		double val1 = a.r * a.r, val2 = b.r * b.r;
		double x1 = (val1 - val2 + d * d) / (2 * d);
		double z1 = x1 * x1;
		double y = sqrt(val1 - z1);
		// debug(val1, val2, x1, z1, y, d);
		cout << setprecision(12) << fixed;
		if (d <= abs(b.r - a.r)) {
			cout << PI * min(val1, val2) << '\n';
		} else {
			cout << val1 * asin(y / a.r) + val2 * asin(y / b.r) - y * (x1 + sqrt(z1 + val2 - val1)) << '\n';
		}
	} else {
		cerr << "HI\n";
		cout << "0.00000000000000000\n";
	}
	return 0;
}