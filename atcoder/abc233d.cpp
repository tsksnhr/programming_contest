#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll INF = 1e15 + 7;

int main(){

	ll N, K;
	cin >> N >> K;
	vector<ll> A(N);
	for (int i = 0; i < N; i++) cin >> A.at(i);

	vector<ll> sumA(N+1);
	map<ll, ll> sumA_cnt;
	for (int i = 0; i < N+1; i++){
		if (i == 0) sumA.at(i) = 0;
		else sumA.at(i) = sumA.at(i-1) + A.at(i-1);
		
		sumA_cnt[sumA.at(i)]++;
	}
	// for (auto x: sumA) cerr << x << " ";
	// cerr << endl;
	// for (auto p: sumA_cnt) cerr << "(" << p.first << ", " << p.second << ") ";
	// cerr << endl;

	ll ans = 0;
	for (int i = 0; i < N+1; i++){
		ll tag = K + sumA.at(i);
		sumA_cnt[sumA.at(i)]--;
		if (sumA_cnt.count(tag)){
			ans += sumA_cnt.at(tag);
		}
	}

	cout << ans << endl;
	return 0;
}