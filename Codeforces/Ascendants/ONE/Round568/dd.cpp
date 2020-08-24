#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ld long double
#define ll long long
 
bool isAp(const vector<ll> &v){
	ll n=(ll) v.size();
	ll diff=v[1]-v[0];
	for(ll i=2;i<n;i++){
		if(v[i]-v[i-1] != diff){
			return false;
		}
	}
	return true;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	std::vector<ll> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	ll ans=0;
	std::vector<ll> vori=v;;
	sort(v.begin(),v.end());
	std::vector<ll> vsub=v;
	for(ll i=1;i<n-1;i++){
		ll leftdiff = v[i]-v[i-1];
		ll rightdiff = v[i+1]-v[i];
		if(leftdiff != rightdiff){
			vsub.erase(vsub.begin()+i);
			if(isAp(vsub)){
				ans=i;
				break;
			}else{
				vsub=v;
				vsub.erase(vsub.begin()+i+1);
				if(isAp(vsub)){
					ans=i+1;
					break;
				}else{
					vsub = v;
					vsub.erase(vsub.begin() + i - 1);
					if(isAp(vsub)) {
						ans = i - 1;
						break;
					} else {
						ans=-1ll;
						break;
					}
				}
			}
 
		}
	}
	vsub=v;
	if(ans == -1ll){
		vsub.erase(vsub.begin());
		if(isAp(vsub)){
			ans=0ll;
		}
	}
	ll final=-1ll;
	if(ans!=-1ll){
		final=find(vori.begin(),vori.end(),v[ans])-vori.begin();
		final+=1ll;
	}
 
	cout<<final;
 
	return 0;
}