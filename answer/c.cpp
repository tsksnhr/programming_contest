#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	ll N;
	cin >> N;

	ll ans = 0;
	ll div = 1, c = 1;
	while (c <= N){

		ll a, b_max;
		for (a = 1; a*a <= c; a++){
			b_max = c/a;
			if (a <= b_max && b_max <= c) ans += b_max - a + 1;
		}

		div++;
		c = N*div;
	}

	cout << ans << endl;
	return 0;
}