#include <bits/stdc++.h>
using namespace std;

int main(void){

    string s;
    int num = 0;

    cin >> s;
    num = count(s.begin(), s.end(), '1');

    cout << num << endl;

    return 0;
}