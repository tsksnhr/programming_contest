// TODO: solve this

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int N, M;
	cin >> N >> M;
	vector<int> A(N);
	vector<int> sum_A(N);
	for (int i = 0; i < N; i++){
		cin >> A.at(i);
		if (i == 0) sum_A.at(i) = A.at(i);
		else sum_A.at(i) = sum_A.at(i-1) + A.at(i);
	}

	ll range_sum = 0;
	ll max_idx = 0;
	for (int i = M-1; i < N; i++){
		ll range_sum_buf = 0;
		if (i == M - 1){
			range_sum_buf = sum_A.at(i);
		}
		else{
			range_sum_buf = sum_A.at(i) - sum_A.at(i - M);
		}
		if (range_sum_buf > range_sum){
			max_idx = i;
			range_sum =range_sum_buf;
		}
	}

	ll ans = 0;
	for (int i = 0; i < M; i++){
		ans += A.at(max_idx - i)*(M - i);
	}

	cout << ans << endl;
	return 0;
}