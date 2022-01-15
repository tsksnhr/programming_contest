#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

	int abc;
	cin >> abc;

	int a = abc/100;
	int b = (abc - a*100)/10;
	int c = abc - a*100 - b*10;

	int bca = b*100 + c*10 + a;
	int cab = c*100 + a*10 + b;

	cout << abc + bca + cab << endl;
	return 0;
}