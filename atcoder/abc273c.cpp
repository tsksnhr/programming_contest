// solved with editorial
#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> A(N);
	map<int, int> dataset;

	for (int i = 0; i < N; i++){
		int tmp;
		cin >> tmp;
		A.at(i) = tmp;
		dataset[tmp]++;
	}

	for (auto iter = dataset.rbegin(); iter != dataset.rend(); iter++){
		cout << iter->second << endl;
	}
	for (int i = 0; i < N - dataset.size(); i++){
		cout << 0 << endl;
	}

	return 0;
}