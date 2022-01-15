#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	
	ll N, K;
	cin >> N >> K;
	vector<ll> A(N);
	for (int i = 0; i < N; i++){
		cin >> A.at(i);
	}

	sort(A.begin(), A.end());
	reverse(A.begin(), A.end());

	
}