#include <bits/stdc++.h>
using namespace std;

string s, t;

int main(){

    cin >> s >> t;

    int cnt = 0;
    for (int i=0; i<3; i++){
        if(s.at(i) == t.at(i)){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}