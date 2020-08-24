#include <bits/stdc++.h>
using namespace std;

#define sz(x) static_cast<int>((x).size())
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

using ll = long long;
using ld = long double;

template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }

vector<vector<int>> getTab(const vector<int>& vec) {
  int n = sz(vec);
  int tabSize = int(log2(n)) + 1;
  vector<vector<int>> ret(tabSize);
  for(int i = 0; i < tabSize; ++i) {
    ret[i].resize(n + 1 - (1 << i));
  }
  iota(all(ret[0]), 0);
  for(int i = 1; i < tabSize; ++i) {
    for(int j = 0; j < sz(ret[i]); ++j) {
      int next = j + (1 << (i - 1));
      if(vec[ret[i - 1][j]] > vec[ret[i - 1][next]]) {
        ret[i][j] = ret[i - 1][j];
      } else {
        ret[i][j] = ret[i - 1][next];
      }
    }
  }
  return ret;
}

vector<int> vec;
vector<vector<int>> tab;

int maxSubArraySum() {
    auto getMin = [&](int l, int r) {
      int len = r - l + 1;
      int ind = int(log2(len));
      int next = len - (1 << ind);
      return max(vec[tab[ind][l]], vec[tab[ind][l + next]]);
    };
   int max_so_far = 0, max_ending_here = 0; 
   for (int i = 0; i < sz(vec); i++) {
       max_ending_here = max_ending_here + vec[i]; 
       if (max_ending_here < 0)
           max_ending_here = 0;
       else if (max_so_far < max_ending_here) 
           max_so_far = max_ending_here - getMin(max_ending_here, i); 
   } 
   return max_so_far; 
} 

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin >> n;
  vec.resize(n);
  for(int& x: vec) cin >> x;
  tab = getTab(vec);
  cout << maxSubArraySum();
  return 0;
}