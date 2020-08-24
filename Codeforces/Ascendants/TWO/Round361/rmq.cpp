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
			if(vec[ret[i - 1][j]] < vec[ret[i - 1][next]]) {
				ret[i][j] = ret[i - 1][j];
			} else {
				ret[i][j] = ret[i - 1][next];
			}
		}
	}
	return ret;
}

auto getMin = [&](int l, int r) {
	int len = r - l + 1;
	int ind = int(log2(len));
	int next = len - (1 << ind);
	return min(vec[tab[ind][l]], vec[tab[ind][l + next]]);
};
