#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	string s;
	cin >> s;

	map<string, int> data;
	sort(s.begin(), s.end());

	do{
		if (data.count(s)) continue;
		data[s]++;
	} while(next_permutation(s.begin(), s.end()));

	int ans = data.size();

	cout << ans << endl;
	return 0;
}