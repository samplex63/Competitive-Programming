#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> vec(n);
    for(int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(vec[i][j] == 'C') {
                for(int k = i + 1; k < n; ++k) {
                    if(vec[k][j] == 'C') {
                        ans++;
                    }
                }
                for(int k = j + 1; k < n; ++k) {
                    if(vec[i][k] == 'C') {
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}