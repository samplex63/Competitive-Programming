#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

struct imp {
	string s;
	int no;
	char last;
	bool used, pa;
	imp() {
		s = "";
		no = 0;
		used = false;
		pa = false;
		last = 'A';
	}
};

struct disp {
	string a, b, c, d;
};

bool com(imp a, imp b) {
	if(a.no == b.no) {
		return a.last < b.last;
	}
	return a.no < b.no;
}

typedef long long ll;
typedef long double ld;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<imp> vec(n);
	for(int i = 0; i < n; ++i) {
		cin >> vec[i].s;
	}
	for(int i = 0; i < n; ++i) {
		for(int j = sz(vec[i].s) - 1; j >= 0; --j) {
			if(vec[i].s[j] == 'a' || vec[i].s[j] == 'e' || vec[i].s[j] == 'i' || vec[i].s[j] == 'o' || vec[i].s[j] == 'u') {
				vec[i].no++;
				if(vec[i].last == 'A') {
					vec[i].last = vec[i].s[j];
				}
			}
		}
	}
	sort(vec.begin(), vec.end(), com);
	// cout << 1 << endl;

	for(int i = 1; i < n; ++i) {
		if(vec[i].no == vec[i - 1].no && vec[i].last == vec[i - 1].last) {
			vec[i - 1].pa = true;
			vec[i].pa = true;
			i++;
		}
	}
	// cout << 1 << endl;
	vector<imp> paired, unpa;
	for(int i = 0; i < n; ++i) {
		if(vec[i].pa) {
			paired.push_back(vec[i]);
			paired.push_back(vec[i + 1]);
			i++;
		} else {
			unpa.push_back(vec[i]);
		}
	}
	// cout << 1 << endl;
	// cout << sz(unpa) << endl;	
	// for(int i = 0; i < sz(unpa); ++i) {
	// 	cout << unpa[i].s << endl;
	// }
	vector<disp> ans;
	int ind = 0;
	for(int i = 0; i < sz(paired); i += 2) {
			// cout << 11 << endl;
		while(ind < (sz(unpa) - 1) && unpa[ind].no != unpa[ind + 1].no) {
			ind++;
			// cout << 11 << endl;
		}
		if(ind == sz(unpa) - 1) break;
		disp ob;
		ob.a = unpa[ind].s;
		ob.b = paired[i].s;
		ob.c = unpa[ind + 1].s;
		ob.d = paired[i + 1].s;
		ind += 2;
		ans.push_back(ob);
		paired[i].used = true;
		paired[i + 1].used = true;
	}
	// cout << 1 << endl;
	int cnt = 0;
	for(int i = 0; i < sz(paired); ++i) {
		if(!paired[i].used) cnt++;
	}

	cnt /= 4;
	ind = 0;
	while(cnt--) {
		while(!paired[ind].used) {
			ind++;
		}
		disp ob;
		ob.a = paired[ind].s;
		ob.b = paired[ind + 1].s;
		ob.c = paired[ind + 2].s;
		ob.d = paired[ind + 3].s;
		ans.push_back(ob);
		ind += 4;
	}

	cout << sz(ans) << '\n';
	for(int i = 0; i < sz(ans); ++i) {
		cout << ans[i].a << ' ' << ans[i].b << '\n' << ans[i].c << ' ' << ans[i].d << '\n';
	}
	return 0;
}