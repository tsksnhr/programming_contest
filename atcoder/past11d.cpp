#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	int N;
	string S, T;
	map<string, int> dataset;

	cin >> N;
	int idx = 0;
	for ( int i = 0; i < N; i++){
		string a, b;
		cin >> a;
		cin >> b;
		if (dataset.count(a) && dataset.count(b)){
			int minimum = min(dataset[a], dataset[b]);
			int maximum = max(dataset[a], dataset[b]);
			dataset[a] = minimum;
			dataset[b] = minimum;

			for (auto p: dataset){
				if (p.second == maximum){
					dataset[p.first] = minimum;
				}
			}
		}
		else if (dataset.count(a)){
			dataset[b] = dataset[a];
		}
		else if (dataset.count(b)){
			dataset[a] = dataset[b];
		}
		else{
			dataset[a] = idx;
			dataset[b] = idx;
			idx++;
		}
	}
	cin >> S >> T;

	// for (auto p: dataset){
	// 	cerr << p.first << " " << p.second << endl;
	// }

	bool is_resemble = true;
	for ( int i = 0; i < S.size(); i++){
		if (S.at( i ) != T.at( i ) ){
			if (dataset.count(S.substr(i, 1)) && dataset.count(T.substr(i, 1))){
				if (dataset[S.substr(i, 1)] != dataset[T.substr(i, 1)]){
					is_resemble = false;
					break;
				}
			}
			else{
				is_resemble = false;
				break;
			}
		}
	}

	if (is_resemble) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}