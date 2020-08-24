#include<bits/stdc++.h>
using namespace std;

int main() {
    unsigned int t;
    cin >> t;

    while(t--) {
        int n, x, i, cnt0 = 0 , cnt1 = 0, cntn1 = 0, cnt = 0;
        cin >> n;
        for(i = 0; i < n; ++i) {
            cin >> x;
            if(x == 0)
                cnt0++;
            else if(x == 1)
                cnt1++;
            else if(x == -1)
                cntn1++;
            else
                cnt++;
        }
        if(cnt > 1)
            cout << "no\n";
        else if(cntn1 != 0 && cnt != 0)
            cout << "no\n";
        else if(cntn1 > 1 && cnt1 == 0)
            cout << "no\n";
        else
            cout << "yes\n";
    }
    return 0;
}