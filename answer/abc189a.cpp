#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    
    bool flg = false;
    if ((s.at(0) == s.at(1)) && (s.at(1) == s.at(2))) flg = true;

    if (flg) cout << "Won" << endl;
    else cout << "Lost" << endl;

    return 0;
}