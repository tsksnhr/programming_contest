#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	int N;
	cin >> N;
	vector<vector<int>> array(N);

	for (int i = 0; i < N; i++){
		for (int j = 0; j < i+1; j++){
			// cerr << i << " " << j << endl;
			int buf;
			if (j == 0 || i == j){
				buf = 1;
			}
			else {
				buf = array.at(i-1).at(j-1) + array.at(i-1).at(j);
			}
			array.at(i).push_back(buf);
			
			cout << buf << " ";
		}
		cout << endl;
	}

	return 0;
}