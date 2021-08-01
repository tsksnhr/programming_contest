// 180 degree

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){

    string s;
    cin >> s;
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++){
        if (s.at(i) == '9') s.at(i) = '6';
        else if (s.at(i) == '6') s.at(i) = '9';
        else continue;
    }

    cout << s << endl;
    return 0;
}