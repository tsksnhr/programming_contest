#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	int N;
	cin >> N;

	int mod = N%100;
	string ans = "";
	if (mod < 10){
		ans = '0' + to_string(mod);
	}
	else{
		ans = to_string(mod);
	}
	cout << ans << endl;

	return 0;
}