#include<bits/stdc++.h>

using namespace std;
using ll = long long;

const ll INF = 1e7;

int calcdigit(int argv){

	int ret = 0;
	while (argv != 0){
		argv /= 10;
		ret++;
	}
	return ret;
}


int main(){

	ll a, N;
	cin >> a >> N;

	ll lim_digit = calcdigit(N);
//	cerr << lim_digit << endl;

	vector<ll> cnt(INF, -1);
	queue<ll> que;
	que.push(1);
	cnt.at(1) = 0;
	
	while (!que.empty()){
		ll src = que.front();
		que.pop();
//		cerr << "src = " << src << endl;
		ll digit = calcdigit(src);

		ll mul = 1, btt = 0;
		mul = src*a;
		mul = min(mul, INF-3);
//		cerr << "mul = " << mul << endl;

		if (src > 10 && src%10 != 0){
			string tmp = to_string(src);
			tmp = tmp.at(digit - 1) + tmp;
			tmp.pop_back();
			btt = stoll(tmp);
			btt = min(btt, INF-3);
//			cerr << "btt = " << btt << endl;
		}
		
		if (digit <= lim_digit){
			if (cnt.at(mul) == -1){
				que.push(mul);
				cnt.at(mul) = cnt.at(src) + 1;
			}
			if (btt > 0 && cnt.at(btt) == -1){
				que.push(btt);
				cnt.at(btt) = cnt.at(src) + 1;
			}
		}
	}

	ll ans = cnt.at(N);
	cout << ans << endl;
	return 0;
}