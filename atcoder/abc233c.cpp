#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll INF = 1e18 + 7;

void dfs(vector<vector<ll>> &A, ll N, ll X, ll height, ll mul, ll &ans){

	if (height == N){
//		cerr << mul << endl;
//		cerr << ans << endl;
		if (mul == X) ans++;
		return;
	}

	for (int w = 0; w < A.at(height).size(); w++){
//		cerr << A.at(height).at(w) << endl;
		if (mul > X/A.at(height).at(w)) continue;
		dfs(A, N, X, height+1, mul*A.at(height).at(w), ans);
	}
}

int main(){

	ll N, X;
	cin >> N >> X;
	vector<vector<ll>> A(N);
//	vector<vector<bool>> seen(N);

	for (int i = 0; i < N; i++){
		ll L;
		cin >> L;
		for (int j = 0; j < L ; j++){
			ll a;
			cin >> a;
			A.at(i).push_back(a);
//			seen.at(i).push_back(false);
		}
	}

	ll ans = 0;
	dfs(A, N, X, 0, 1, ans);

	cout << ans << endl;
	return 0;
}