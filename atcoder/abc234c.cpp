#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

	ll K;
	cin >> K;

	bitset<64> pat(K);
	
	string tmp = "";
	bool flg = false;
	for (int i = 63; i >= 0; i--){
		if (pat.test(i)) {
			tmp = tmp + '2';
			flg = true;
		}
		else if (flg){
			tmp = tmp + '0';
		}
		else {
			// none
		}
	}

	cout << tmp << endl;

	return 0;
}