#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void dfs(int N, vector<vector<int>> &tree, vector<int> &used, int now){
	used.at(now) = true;

	for (auto next: tree.at(now)){
		if (used.at(next) == true) continue;
		dfs(N, tree, used, next);
	}

	return;
}

int main(){

	int N;
	cin >> N;
	vector<vector<int>> tree(N);
	for (int i = 0; i < N-1; i++){
		int l, r;
		cin >> l >> r;
		l--;
		r--;
		tree.at(l).push_back(r);
		tree.at(r).push_back(l);
	}

	for (int i = 0; i < N; i++){
		if (tree.at(i).size() == N-1){
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}