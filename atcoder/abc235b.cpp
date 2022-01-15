#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	
	int N;
	cin >> N;
	vector<int> H(N);
	for (int i = 0; i < N; i++) cin >> H.at(i);

	int ans = 0;
	for (int i = 0; i < N; i++){
		if (ans < H.at(i)) ans = H.at(i);
		else break;
	}

	cout << ans << endl;
	return 0;
}