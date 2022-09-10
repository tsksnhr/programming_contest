#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

	map<int, int> dataset;
	for (int i = 0; i < 5; i++){
		int buf = 0;
		cin >> buf;
		dataset[buf]++;
	}

	int ans = 0;
	for (auto p: dataset){
		ans++;
	}

	cout << ans << endl;
	return 0;
}