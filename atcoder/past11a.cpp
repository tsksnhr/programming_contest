#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
	double X, A, B, C;
	cin >> X >> A >> B >> C;

	double rabbt_time, turtoise_time;
	rabbt_time = ( ( X/2 )/A )*2 + C; 
	turtoise_time = X/B;
	cerr << rabbt_time << " " << turtoise_time << endl;

	if ( rabbt_time > turtoise_time ){
		cout << "Tortoise" << endl;
	}
	else if ( rabbt_time < turtoise_time ){
		cout << "Hare" << endl;
	}
	else{
		cout << "Tie" << endl;
	}

	return 0;
}