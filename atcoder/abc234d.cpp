#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

	int N, K;
	cin >> N >> K;
	vector<int> P(N);
	for (int i = 0; i < N; i++) cin >> P.at(i);

	priority_queue<int, vector<int>, greater<int>> pque;
	for (int i = 0; i < N; i++){
		int dif = i - (K - 1);

		if (dif <= 0){
			pque.push(P.at(i));
			if (dif == 0){
				cout << pque.top() << endl;
			}
		}
		else {
			if (P.at(i) < pque.top()) cout << pque.top() << endl;
			else {
				pque.push(P.at(i));
				pque.pop();
				cout << pque.top() << endl;
			}
		}
	}
	
	return 0;
}