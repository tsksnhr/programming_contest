#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll LIMIT = 1e9;

ll tinyPow(ll base, int last_value){
	ll ret = base*last_value;
	return ret;
}

int main(){
	ll N, M;
	cin >> N >> M;

	string ans = "";
	ll thr = 1;
	bool is_over_limit = false;
	for ( int i = 0; i < M; i++){
		if ( is_over_limit ){
			ans += "x";
		}
		else{
			thr = tinyPow( N, thr );
			if ( thr <=  LIMIT ){
				ans += "o";
			}
			else{
				ans += "x";
				is_over_limit = true;
			}
		}
	}

	cout << ans << endl;

	return 0;
}