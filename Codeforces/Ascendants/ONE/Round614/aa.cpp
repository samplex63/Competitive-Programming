#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) static_cast<int>((x).size())

typedef long long ll;
typedef long double ld;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) {
        int n, s, k;
        cin >> n >> s >> k;
        vector<int> vec(k);
        for(int i = 0; i < k; ++i) cin >> vec[i];
        sort(vec.begin(), vec.end());
        int ans = INT_MAX;
        for(int i = s; i <= n; ++i) {
            if(!binary_search(vec.begin(), vec.end(), i)) {
                ans = min(abs(s - i), ans);
                break;
            }
        }
        for(int i = s; i > 0; --i) {
            if(!binary_search(vec.begin(), vec.end(), i)) {
                ans = min(ans, abs(s - i));
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}