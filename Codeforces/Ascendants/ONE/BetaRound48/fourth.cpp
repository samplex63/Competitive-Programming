#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define se second
#define mod 1000000007
using namespace std;
#define WATCH(x) cerr << "The value of " << #x << " is " << x << endl
#define EPS 1e-6

bool fEqual(double a, double b){
	return (abs(a - b) < EPS);
}
bool isGP(double arr[], ll N, ll ignore){
	double last = -1;
	double ratio = -1;
	for (ll i = 0; i < N; i++){
		if (i != ignore){
			if (last != -1){
				if (ratio == -1)
					ratio = arr[i] / last;
				else if (!fEqual(ratio, arr[i] / last))
					return false;
			}
			last = arr[i];
		}
	}
	return true;
}
ll makeGPbyRemovingOneElement(double arr[], ll N){
	if (isGP(arr, N, 0))
		return 0ll;
	if (isGP(arr, N, 1))
		return 1ll;
	if (isGP(arr, N, N-1))
		return (N - 1);
	double ratio = arr[1]/arr[0];
	for (ll i = 2; i < N; i++){
		if (!fEqual(ratio,arr[i]/arr[i-1])){
			return (isGP(arr+i-2, N-i+2, 2))? i : -1ll;
		}
	}
	return -1ll;
}
int main(){
	ll n;
	cin >> n;
	double arr[n];
	for(ll i=0 ; i<n ; i++)
		cin >> arr[i];
	ll index = makeGPbyRemovingOneElement(arr, n);
	if (index == -1)
		cout << "2\n";
	else if(index == 0)
		cout << "0\n";
	else
		cout << "1\n";
	return 0;
}