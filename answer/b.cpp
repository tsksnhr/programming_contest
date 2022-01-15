#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	int N;
	cin >> N;
	vector<int> S(N);
	for (int i = 0; i < N; i++){
		cin >> S.at(i);
	}

	int ans = 0;
	for (int i = 0; i < N; i++){
		bool flg = false;

		for (int a = 1; a <= 200; a++){
			for (int b = 1; b <= 200; b++){
				int area = 4*a*b + 3*a + 3*b;

				if (area == S.at(i)) flg = true;
			}
		}
		if (!flg){
//			cerr << S.at(i) << endl;
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}