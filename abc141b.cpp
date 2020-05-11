#include <bits/stdc++.h>
using namespace std;

string s;

int main(){

    cin >> s;

    for (int i=0; i<s.size(); i += 2){
        if (s.at(i) == 'L'){
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i=1; i<s.size(); i += 2){
        if (s.at(i) == 'R'){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}