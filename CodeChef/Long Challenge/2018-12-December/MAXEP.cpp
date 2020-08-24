#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long int ULL;

int jump_search(int &start, int &end, int step, int n) {
	int start_substi = start;

	start_substi += step;
	if(start_substi > n) {
		start = start_substi - step;
		end = n;
		return 1;
	}
	cout << "1 " << start_substi << endl;
	int feed;
	cin >> feed;

	if(feed) {
		cout << '2' << endl;
		end = start_substi;
		start = start_substi - step;
		return 1;
	}
	else {
		start = start_substi;
		return 0;
	}
	return 0;
}

void linear_search_ans(int &start, int &end) {
	if(start != 1)
		start++;
	int feed = 0;
	while(feed == 0) {
		cout << "1 " << start << endl;
		cin >> feed;
		if(feed) {
			cout << '2' << endl << "3 " << start << endl;
		}
		else {
			start++;
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, c, feed = 0;

	cin >> n >> c;
	int start = 1, end = n;
	int step = sqrt(end - start);

	if(end - start > step + c) {
		while(feed == 0) {
			feed = jump_search(start, end, step, n);
		}
	}

	step = sqrt(end - start);
	feed = 0;

	if(end - start > step + c) {
		while(feed == 0) {
			feed = jump_search(start, end, step, n);
		}
	}

	linear_search_ans(start, end);
	return 0;
}