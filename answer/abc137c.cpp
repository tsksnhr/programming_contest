#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int n;
    string s;
    map<string, ll> dict;

    cin >> n;
    for (int i=0; i<n; i++){
        cin >> s;
        sort(s.begin(), s.end());
        dict[s]++;        
    }

    ll cnum = 0;
    for (auto p: dict){
        auto key = p.first;
        auto value = p.second;
        cnum += (p.second*(p.second - 1))/2;
    }

    cout << cnum << endl;
    return 0;
}