#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int) (x).size()

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
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		bool flag=true;
		int mine=v[0];
		int maxe=v[n-1];
		if(maxe-mine>1){
			cout<<"-1"<<"\n";
		}
		else{
			if(maxe==0 && mine==0){
				cout<<n<<"\n";
			}else if(maxe == n-1 && mine== n-1){
				cout<<0<<'\n';
			}
			else{
				int minoccure=0;
				for(int i=0;i<n;i++){
					if(v[i]==mine){
						minoccure++;
					}
				}
				if(mine==minoccure-1 && maxe==minoccure){
					cout<<n-maxe<<"\n";
				}else{
					cout<<"-1"<<"\n";
				}
			}
		}
		
	}
	return 0;
}