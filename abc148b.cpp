#include <bits/stdc++.h>
using namespace std;

int n;
string s, t;
vector<char> c;

int main(){

    cin >> n >> s >> t;

    for (int i=0; i<s.size(); i++){
        c.push_back(s.at(i));
        c.push_back(t.at(i));
    }

    for (auto x: c){
        cout << x;
    }
    cout << endl;

    return 0;
}