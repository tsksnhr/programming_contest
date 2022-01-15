#include<bits/stdc++.h>

using namespace std;
using ll = long long;

const int LIM = 1e9+5;

int main(){

	int N, Q;
	cin >> N >> Q;
	map<int, int> freq;
	map<pair<int, int>, int> data;
	for (int i = 0; i < N; i++){
		int x; 
		cin >> x;
		freq[x]++;

		data[make_pair(x, freq[x])] = i + 1;
	}

	for (int q = 0; q < Q; q++){
		int x, k;
		cin >> x >> k;

		pair<int, int> P(x, k);

		if (data.count(P)) cout << data.at(P) << endl;
		else cout << -1 << endl;
	}

	return 0;
}