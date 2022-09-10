#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool checkPinStatus(string &S, int idx){
	// cerr << "idx = " << idx << endl;
	// cerr << S.at(idx) << endl;
	if (S.at(idx) == '1') return true;
	else return false;
}

int main(){
	string S;
	cin >> S;

	if (S.at(0) == '1'){
		cout << "No" << endl;
		return 0;
	}

	vector<bool> rows(7, false);
	// middle
	if (checkPinStatus(S, 1-1) == false && checkPinStatus(S, 5-1) == false) rows.at(3) = false;
	else rows.at(3) = true;
	// left
	if (checkPinStatus(S, 2-1) == false && checkPinStatus(S, 8-1) == false) rows.at(2) = false;
	else rows.at(2) = true;
	if (checkPinStatus(S, 4-1) == false) rows.at(1) = false;
	else rows.at(1) = true;
	if (checkPinStatus(S, 7-1) == false) rows.at(0) = false;
	else rows.at(0) = true;
	// right
	if (checkPinStatus(S, 3-1) == false && checkPinStatus(S, 9-1) == false) rows.at(4) = false;
	else rows.at(4) = true;
	if (checkPinStatus(S, 6-1) == false) rows.at(5) = false;
	else rows.at(5) = true;
	if (checkPinStatus(S, 10-1) == false) rows.at(6) = false;
	else rows.at(6) = true;

	// for (auto x: rows){
	// 	cerr << x << endl;
	// }

	int exist_cnt = 0;
	int vacant_cnt = 0;
	for (int i = 0; i < 7; i++){
		bool is_exist = (rows.at(i) == true);
		if (is_exist){
			if (exist_cnt == 0) exist_cnt++;
			else{
				if (vacant_cnt > 0) exist_cnt++;
			}
		}
		else{
			if (exist_cnt > 0) vacant_cnt++;
		}
		if ((exist_cnt >= 2) && (vacant_cnt > 0)){
			cout << "Yes" << endl;
			return 0;
		}
		// cerr << exist_cnt << " " << vacant_cnt << endl;
	}
	cout << "No" << endl;
	return 0;
}