#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

int main(){

    string s;
    cin >> s;

    int cnt = 0;
    for(int i=0; i<3; i++){
        if(s.at(i) == 'S') cnt++;
    }

    if(cnt == 0) cout << 3-cnt << endl;
    else if(cnt == 1){
        if(s.at(1) == 'S') cout << 1 << endl;
        else cout << 2 << endl;
    }
    else if(cnt == 2) cout << 3-cnt << endl;
    else cout << 3-cnt << endl;

    return 0;
}