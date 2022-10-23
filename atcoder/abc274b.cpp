#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	
	int H, W;
	cin >> H >> W;
	vector<int> w_data(W, 0);
	// map<int, int> dataset;
	for (int h = 0; h < H; h++){
		for (int w = 0; w < W; w++){
			char tmp;
			cin >> tmp;
			// if (h == 0) dataset[w] = 0;
			// if (tmp == '#') dataset[w]++;
			if (tmp == '#') w_data.at(w) += 1;
		}
	}

	// for (auto p: dataset){
	// 	cout << p.second << " ";
	// }
	for (int w = 0; w < W; w++){
		cout << w_data.at(w);
		if (w != W-1) cout << " ";
	}

	cout << endl;

	return 0;
}