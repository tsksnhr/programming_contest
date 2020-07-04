#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    string s,t;
    cin >> s >> t;

    int size = s.size();
    int ans = 0;
    for(int i=0; i<size; i++){
        if(s.at(i) != t.at(i)) ans++;
    }

    cout << ans << endl;
    return 0;
}