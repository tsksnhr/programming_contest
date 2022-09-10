#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

	string S, T;
	cin >> S >> T;

	if (S.size() > T.size()){
		cout << "No" << endl;
		return 0;
	}

	bool is_prefix = true;
	for (int i = 0; i < S.size(); i++){
		if (S.at(i) == T.at(i)) continue;
		else {
			is_prefix = false;
			break;
		}
	}

	if (is_prefix) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}