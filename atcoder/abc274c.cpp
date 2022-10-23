// solved with editorial after on-time contest
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX_DATA = 2e5;

ll diver(ll num){
	ll ret = 0;
	while (num != 1){
		num /= 2;
		ret++;
	}
	return ret;
}

void solver(int N, vector<int> &A){

	vector<ll> ans;
	ans.push_back(0);

	for (int i = 0; i < N; i++){
		ll l, r;
		l = A.at(i)*2;
		r = l + 1;

		ll tmp = diver(l);
		ans.push_back(tmp);

		tmp = diver(r);
		ans.push_back(tmp);
	}

	for (int i = 0; i < ans.size(); i++){
		cout << ans.at(i) << endl;
	}

	return;
}

void solver_2(int N, vector<int> A){

	map<ll, ll> ans;
	ans[1] = 0;
	for (int i = 1; i < MAX_DATA; i++){
		ans[2*i] = ans[i] + 1;
		ans[2*i + 1] = ans[i] + 1;
	}

	// for (auto p: ans){
	// 	cerr << p.first << " " << p.second << endl;
	// }

	cout << 0 << endl;
	for (int i = 0; i < N; i++){
		cout << ans[A.at(i)*2] << endl;
		cout << ans[A.at(i)*2 + 1] << endl;
	}

	return;
}

void solver_3(int N, vector<int> &A){

	vector<int> ans(2*N+1, 0);
	for (int i = 0; i < N; i++){
		ans.at(2*(i+1)-1) = ans.at(A.at(i)-1) + 1;
		ans.at(2*(i+1)) = ans.at(A.at(i)-1) + 1;
	}

	for (int i = 0; i < int(ans.size()); i++){
		// cerr << i << " ";
		cout << ans.at(i) << endl;
	}

	return;
}

int main(){
	
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++){
		int tmp;
		cin >> tmp;
		A.at(i) = tmp;
	}

	// solver(N, A);
	// solver_2(N, A);
	solver_3(N, A);

	return 0;
}