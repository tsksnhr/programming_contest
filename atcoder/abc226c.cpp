#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	
	ll N, M;
	cin >> N >> M;
	vector<vector<ll>> array(N, vector<ll>(M, 0));
	for (ll i = 0; i < N; i++){
		for (ll j = 0; j < M; j++){
			cin >> array.at(i).at(j);
		}
	}

	ll st_column = (array.at(0).at(0))%7;
	if (st_column == 0) st_column = 7;
	ll st_row = (array.at(0).at(0))/7;
	if (array.at(0).at(0)%7 != 0) st_row++;  

	for (ll i = 0; i < N; i++){
		for (ll j = 0; j < M; j++){
			ll ref = (st_row + i -1)*7 + st_column + j;
			if (array.at(i).at(j) != ref || st_column + j > 7){
				cout << "No" << endl;
				return 0;
			}
		}
	}

	cout << "Yes" << endl;
	return 0;
}