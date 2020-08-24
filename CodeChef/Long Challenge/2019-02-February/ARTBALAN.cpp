#include <bits/stdc++.h>
using namespace std;

#define WATCH(x) cerr << "The value of " << #x << " is " << x << '\n'

typedef long long int LLI;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int tt;
	cin >> tt;
	while(tt--) {
		string inp;
		cin >> inp;
		vector<LLI> vec(26, 0);
		for(auto x: inp) {
			vec[x - 'A']++;
		}
		sort(vec.begin(), vec.end());
		LLI total = inp.size();

		if(vec.front() == 0) {
			vec.erase(vec.begin(), upper_bound(vec.begin(), vec.end(), 0));
		}
		LLI ans = total - vec.back();

		for(LLI bal_size = 2; bal_size <= min(total, 26ll); ++bal_size) {
			if(total % bal_size == 0) {
				LLI bal_height = total / bal_size;
				LLI small = 0;
				LLI large = 0;
				LLI first_dist = distance(vec.begin(), lower_bound(vec.begin(), vec.end(), bal_height));
				LLI last_dist = distance(vec.begin(), upper_bound(vec.begin(), vec.end(), bal_height));

				for(LLI i = 0; i < first_dist; ++i) {
					small += (bal_height - vec[i]);
				}
				
				for(LLI i = last_dist; i < vec.size(); ++i) {
					if(vec[i] == bal_height) {
						continue;
					}
					large += (vec[i] - bal_height);
				}
				vector<LLI> vec_copy = vec;
				LLI sub_ans = large;

				if(large < small) {
					first_dist--;
					small -= large;
					while(large > 0) {
						vec[first_dist]++;
						if(vec[first_dist] >= bal_height) {
							first_dist--;
						}
						large--;
					}
				
					LLI mult_val = 0;
					for(LLI i = 0; i < vec.size() - bal_size; ++i) {
						mult_val += vec[i];
					}

					small *= mult_val;
					small /= (vec.size() - bal_size);
					small /= bal_height;
					sub_ans += small;
				}
				ans = min(sub_ans, ans);
				vec = vec_copy;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}