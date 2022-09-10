#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int tiny_modp(int be_dived, int div){
	int mod = be_dived%div;
	int ret;
	if (mod < 0){
		ret = mod + div;
	}
	else ret = mod;

	return ret;
}


int main(){

	int N;
	cin >> N;
	vector<int> p(N);
	for (int i = 0; i < N; i++){
		cin >> p.at(i);
	}

	map<int, int> move_cnt;
	for (int idx = 0; idx < N; idx++){
		set<int> buf;

		for (int i = 0; i < 3; i++){
			int temp_target;
			if (i == 0) temp_target = p.at(idx);
			else if (i == 1) temp_target = tiny_modp(p.at(idx) - 1, N);
			else temp_target = tiny_modp(p.at(idx) + 1, N);

			if (temp_target >= idx){
				temp_target = temp_target - idx;
			}
			else{
				temp_target = N - abs(temp_target - idx);
			}
			buf.insert(temp_target);
			if (buf.count(temp_target)){
				move_cnt[temp_target]++;
			}
		}
	}

	int ans = 0;
	for (auto p: move_cnt){
		// cerr << p.first << " " << p.second << endl;
		ans = max(ans, p.second);
	}

	cout << ans << endl;

	return 0;
}