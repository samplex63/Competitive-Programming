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
        int n;
        cin >> n;
        if(n & 1) {
            cout << '7' << string(n / 2 - 1, '1') << '\n';
        } else {
            cout << string(n / 2, '1') << '\n';
        }
    }
    return 0;
}