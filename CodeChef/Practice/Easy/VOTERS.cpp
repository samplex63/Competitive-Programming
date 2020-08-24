#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	std::vector<int> vec1(n1), vec2(n2), vec3(n3);
	for(int &x: vec1) {
		cin >> x;
	}
	for(int &x: vec2) {
		cin >> x;
	}
	for(int &x: vec3) {
		cin >> x;
	}
	std::vector<int> vec_ans;
	for(int x: vec1) {
		if(binary_search(vec2.begin(), vec2.end(), x) || binary_search(vec3.begin(), vec3.end(), x)) {
			vec_ans.push_back(x);
		}
	}
	for(int x: vec2) {
		if(binary_search(vec3.begin(), vec3.end(), x)) {
			vec_ans.push_back(x);
		}
	}
	sort(vec_ans.begin(), vec_ans.end());
	vec_ans.erase(unique(vec_ans.begin(), vec_ans.end()), vec_ans.end());
	cout << vec_ans.size() << '\n';
	for(int x: vec_ans) {
		cout << x << '\n';
	}
	return 0;
}