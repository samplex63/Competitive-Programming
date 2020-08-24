#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int manh(int x1, int y1, int x2, int y2) {
	return abs(x2 - x1) + abs(y2 - y1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> vecx(n), vecy(n);
	for(int i = 0; i < n; ++i) {
		cin >> vecx[i] >> vecy[i];
	}
	int xmin = *min_element(vecx.begin(), vecx.end()), xmax = *max_element(vecx.begin(), vecx.end());
	int ymin = *min_element(vecy.begin(), vecy.end()), ymax = *max_element(vecy.begin(), vecy.end());
	xmin--; xmax++;
	ymin--; ymax++;

	int m00 = INT_MAX, m01 = INT_MAX, m10 = INT_MAX, m11 = INT_MAX;
	int current = 2 * ((xmax - xmin) + (ymax - ymin));
	for(int i = 0; i < n; ++i) {
		int man00 = manh(xmin, ymin, vecx[i], vecy[i]);
		m00 = min(man00, m00);
		int man01 = manh(xmin, ymax, vecx[i], vecy[i]);
		m01 = min(man01, m01);
		int man10 = manh(xmax, ymin, vecx[i], vecy[i]);
		m10 = min(man10, m10);
		int man11 = manh(xmax, ymax, vecx[i], vecy[i]);
		m11 = min(man11, m11);
	}
	current -= m00;
	current -= m01;
	current -= m10;
	current -= m11;
	current += 4;
	cout << current << '\n';

	return 0;
}