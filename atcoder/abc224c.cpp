#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	int N;
	cin >> N;
	vector<pair<ll, ll>> pos(N);
	for (int i = 0; i < N; i++){
		ll x, y;
		cin >> x >> y;
		pos.at(i) = make_pair(x, y);
	}

	ll ans = 0;
	for (int i = 0; i < N; i++){
		for (int j = i+1; j < N; j++){
			for (int k = j+1; k < N; k++){
				if (i == j || j == k || k == i) continue;

				pair<ll, ll> a, b, c;
				a = pos.at(i);
				b = pos.at(j);
				c = pos.at(k);

				ll dx1, dx2, dy1, dy2;
				dx1 = b.first - a.first;
				dx2 = c.first - a.first;
				dy1 = b.second - a.second;
				dy2 = c.second - a.second;

				if (dx2*dy1 != dx1*dy2){
//					cerr << i << j << k << endl;
					ans++;
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}