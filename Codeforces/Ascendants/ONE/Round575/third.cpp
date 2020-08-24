#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

struct Robo {
	int x, y, l, u, r, d;
};

struct Rect {
	int bottom, left, top, right;
	Rect() {
		bottom = (int) -1e5;
		left = (int) -1e5;
		top = (int) 1e5;
		right = (int) 1e5;
	}
};

Rect getRectange(Robo a) {
	Rect ret_this;
	if(a.l == 0) ret_this.left = a.x;
	if(a.r == 0) ret_this.right = a.x;
	if(a.u == 0) ret_this.top = a.y;
	if(a.d == 0) ret_this.bottom = a.y;
	return ret_this;
}

Rect inter(Rect a, Rect b) {
	Rect ret_this;
	ret_this.left = max(a.left, b.left);
	ret_this.bottom = max(a.bottom, b.bottom);
	ret_this.right = min(a.right, b.right);
	ret_this.top = min(a.top, b.top);

	if (ret_this.left > ret_this.right || ret_this.bottom > ret_this.top) { 
		ret_this.right = (int) 1e6;
	}
	return ret_this;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		int n;
		cin >> n;
		vector<Rect> v(n);
		for(int i = 0; i < n; ++i) {
			Robo kk;
			cin >> kk.x >> kk.y >> kk.l >> kk.u >> kk.r >> kk.d;
			v[i] = getRectange(kk);
		}
		Rect ma;
		bool flag = true;
		for(int i = 0; i < n; ++i) {
			ma = inter(ma, v[i]);
			if(ma.right == (int) 1e6) {
				flag = false;
				break;
			}
		}
		flag? cout << "1 " << ma.left << ' ' << ma.bottom << '\n': cout << "0\n";
	}
	return 0;
}