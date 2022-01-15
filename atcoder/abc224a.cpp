#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

	string str;
	cin >> str;

	int size = str.size();
	char a, b, c;
	a = str.at(size-1);
	b = str.at(size-2);
	if (a == 'r' && b == 'e'){
		cout << "er" << endl;
		return 0;
	}

	if (size > 2){
		c = str.at(size-3);
		if (a == 't' && b == 's' && c == 'i') cout << "ist" << endl;
	}

	return 0;  
}