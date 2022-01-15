#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	int H, W;
	cin >> H >> W;
	vector<vector<ll>> num_map(H, vector<ll>(W, 0));
	for (int h = 0; h < H; h++){
		for (int w = 0; w < W; w++){
			cin >> num_map.at(h).at(w);
		}
	}

	ll l, r;
	for (int hl = 0; hl < H; hl++){
		for (int hr = hl+1; hr < H; hr++){
			for (int wl = 0; wl < W; wl++){
				for (int wr = wl+1; wr < W; wr++){
					l = num_map.at(hl).at(wl) + num_map.at(hr).at(wr);
					r = num_map.at(hr).at(wl) + num_map.at(hl).at(wr);

					if (l > r){
						cout << "No" << endl;
						return 0;
					}
				}
			}
		}
	}

	cout << "Yes" << endl;
	return 0;
}