// Not solved
// Couldn't solved in time
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int H, W;
	cin >> H >> W;
	vector<vector<ll>> area(H, vector<ll>(W));
	for (int h = 0; h < H; h++){
		for (int w = 0; w < W; w++){
			cin >> area.at(h).at(w);
		}
	}
	int N;
	cin >> N;
	map<ll, ll> query;
	for (int i = 0; i < N; i++){
		ll r, c;
		cin >> r >> c;
		r--;
		c--;
		r -= query[c];
		if (area.at(r).at(c) != 0){
			area.at(r).at(c) = 0;
			query[c]++;
		}
	}

	for (int h = H-1; h > 0; h--){
		for (int w = 0; w < W; w++){
			if (area.at(h).at(w) == 0){
				swap(area.at(h).at(w), area.at(h-1).at(w));
			}
		}
	}

	for (int h = 0; h < H; h++){
		for (int w = 0; w < W; w++){
			cout << area.at(h).at(w) << " ";
		}
		cout << endl;
	}

	return 0;
}