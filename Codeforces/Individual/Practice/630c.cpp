#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << (((1LL << n) - 1) << 1) << '\n';
    return 0;
}