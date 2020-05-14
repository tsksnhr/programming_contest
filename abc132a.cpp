#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    map<char, int> dict;
    for (int i=0; i<s.size(); i++){
        dict[s.at(i)]++;
    }

    if (dict.size() == 2){
        for (auto p: dict){
            auto value = p.second;
            if (value != 2){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    else{
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}