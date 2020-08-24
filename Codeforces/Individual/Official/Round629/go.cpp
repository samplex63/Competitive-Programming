#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb(x) emplace_back(x)
#define sz(x) static_cast<int> ((x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef long double ld;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a(n, '0'), b(n, '0');
        a[0] = '1';
        b[0] = '1';
        for(int i = 1; i < sz(s); i++) {
        	if(s[i] == '2') {
        		string tempmax = max(a, b);
        		string tempmin = min(a, b);
        		tempmin[i] = '2';
        		tempmax[i] = '0';
        		string tempmaxa = max(tempmax, tempmin);
        		tempmin[i] = '1';
        		tempmax[i] = '1';
        		string tempmaxb = max(tempmax, tempmin);
        		if(tempmaxa > tempmaxb) {
        			a[i] = '1'; b[i] = '1';
        		} else {
        			if(a > b) {
        				b[i] = '2';
        				a[i] = '0';
        			} else {
        				b[i] = '0';
        				a[i] = '2';
        			}
        		}
        	} else if(s[i] == '1') {
        		if(a > b) {
        			a[i] = '0';
        			b[i] = '1';
        		} else {
        			a[i] = '1';
        			b[i] = '0';	
        		}	
        	} else {
        		a[i] = '0'; b[i] = '0';
        	}
        }
        cout << a << '\n' << b << '\n';
    }
    cerr << 1.0 * clock() / CLOCKS_PER_SEC;
    return 0;
}