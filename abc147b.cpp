#include <bits/stdc++.h>
using namespace std;

string s;
int cnt;

int main(){

    cin >> s;

    cnt = 0;

    for(int i=0; i<s.size()/2; i++){
        if (s.at(i) != s.at(s.size()-1-i)){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
