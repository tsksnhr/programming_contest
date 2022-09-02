#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	string S;
	cin >> S;

	map<string, ll> dataset;

	for ( int i = 0; i < S.size()-1; i++ ){
		string buf = S.substr( i, 2 );
		dataset[buf]++;
	}

	string ans;
	ll max = 0;
	for ( auto p: dataset ){
		if ( max < p.second ){
			ans = p.first;
			max = p.second;
		}
	}
	cout << ans << endl;

	return 0;
}