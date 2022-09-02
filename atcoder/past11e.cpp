#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	ll N;
	cin >> N;

	long double n_buf = sqrt(N);
	// cerr << n_buf << endl;
	ll n = n_buf;
	if (n_buf != n){
		n++;
	}
	// cerr << n << endl;
	
	ll left = ((n-1)*(2+(n-2)*2))/2 + 1;
	ll right = ((n)*(2+(n-1)*2))/2;
	ll mid = (left + right)/2;
	// cerr << left << " " << mid << " " << right << endl;

	ll dif = N - mid;
	ll ans = 0;
	if (dif == 0){
		ans = 1;
	}
	else{
		ans = 1 + abs(dif);
	}

	if (N == 1) cout << 1 << endl;
	else cout << ans << endl;

	return 0;
}