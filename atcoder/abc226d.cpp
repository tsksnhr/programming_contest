#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	ll N, Q;
	cin >> N >> Q;
	vector<list<int>> trains(N);
	for (int i = 0; i < N; i++){
		trains.at(i).push_back(i);
	}

	for (int i = 0; i < Q; i++){
		int command;
		cin >> command;

		if (command == 1){
			int x, y;
			x--;
			y--;
			for (auto a: trains.at(y)){
				trains.at(x).push_back(a);
			}
			reverse(trains.at(x).begin(), trains.at(y).end());
			for (auto a: trains.at(x)){
				trains.at(y).push_front(a);
			}
			reverse(trains.at(x).begin(), trains.at(y).end());
		}
		else if (command == 2){
			int x, y;
			x--;
			y--;
			bool flg = false;
			for (int i = 0; i < trains.at(x).size(); i++){
				trains.at(x).
			}
		}
	}
}