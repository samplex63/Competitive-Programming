#include<bits/stdc++.h>
using namespace std;

int main() {
    unsigned int t, n, m;
    string inp;

    cin >> t;
    while(t--) {
        cin >> n >> m;
        bool mat[n][m];

        for(int i = 0; i < n; ++i) {
            cin >> inp;
            for(int j = 0; j < m; ++j)
                mat[i][j] = (inp[j] == '0')? 0: 1;
        }
        int cnt = 0;
        for(int i = 0; i < n; ++i)
            for(int j = i + 1; j < n; ++j)
                for(int k = 0; k < m; ++k)
                    if(mat[i][k] == 1 && mat[j][k] == 1)
                        cnt++;
        cout << cnt << endl;
    }
    return 0;
}