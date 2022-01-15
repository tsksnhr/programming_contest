#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	int N, K, A;
	cin >> N >> K >> A;

	int cnt = A - 1;
	for (int i = 0; i < K; i++){
		cnt++;
		if (cnt > N) cnt = 1;
	}

	int ans = cnt;
	cout << ans << endl;
	return 0;
}