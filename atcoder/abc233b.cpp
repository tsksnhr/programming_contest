#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

	int L, R;
	cin >> L >> R;
	string S;
	cin >> S;
	string rS;
	reverse(rS.begin(), rS.end());

	string ans = "";
	for (int i = 0; i < L-1; i++) ans += S.at(i);
	for (int i = R-1; i >= L-1; i--) ans += S.at(i);
	for (int i = R; i < S.size(); i++) ans += S.at(i);

	cout << ans << endl;
	return 0;
}