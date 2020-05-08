#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main(){

    cin >> n >> s;
    vector<char> ans(s.size());
    map<char, int> dict;
    int i;
    for (i=0; i<26; i++){
        char tmp = 'A'+ i;
        dict[tmp] = i;
    }
    for (i=0; i<s.size(); i++){
        int pos = dict[s.at(i)] + n;
        //  アルファベットは26文字なので等号を入れないとpos==26で結果がおかしくなる
        if (pos >= 26){
            ans.at(i) = (char)('A' + pos - 26);
        }
        else{
            ans.at(i) = (char)(s.at(i) + n);
        }
    }

    for (auto x: ans){
        cout << x;
    }
    cout << endl;
    return 0;
}