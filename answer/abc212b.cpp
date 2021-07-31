// Weak Password

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    string s;
    cin >> s;

    vector<int> X(4);
    for (int i = 0; i < 4; i++){
        X.at(i) = s.at(i) - '0';
    }
    // for (auto x: X) cerr << x << " ";
    // cerr << endl;

    if (s == "0000"){
        cout << "Weak" << endl;
        return 0;
    }

    vector<int> dif(3);
    for (int i = 1;  i < 4; i++){
        int tmp = X.at(i);
        if (X.at(i) == 0) X.at(i) = 10;
        dif.at(i-1) = X.at(i) - X.at(i-1);
        X.at(i) = tmp;
    }
    // for (auto x: dif) cerr << x << " ";
    // cerr << endl;

    if (dif.at(0) == 0 && dif.at(1) == 0 && dif.at(2) == 0){
        cout << "Weak" << endl;
    }
    else if (dif.at(0) == 1 && dif.at(1) == 1 && dif.at(2) == 1){
        cout << "Weak" << endl;
    }
    else{
        cout << "Strong" << endl;
    }

    return 0;
}