#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	string S;
	cin >> S;

	int sat_idx = 6;
	int ans = 0;
	if (S == "Monday") ans = sat_idx - 1;
	else if (S == "Tuesday") ans = sat_idx - 2;
	else if (S == "Wednesday") ans = sat_idx - 3;
	else if (S == "Thursday") ans = sat_idx - 4;
	else ans = sat_idx - 5;

	cout << ans << endl;

	return 0;
}