#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

	int X, Y;
	cin >> X >> Y;

	int dif = Y - X;
	if (dif <= 0){
		cout << 0 << endl;
		return 0;
	}

	int ans = dif/10;
	if (dif%10 != 0) ans++;

	cout << ans << endl;
	return 0;
}