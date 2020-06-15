#include <bits/stdc++.h>
using namespace std;

int main(){

    string w;
    cin >> w;

    int size = w.size();
    map<char, int> dict;

    for (int i=0; i<size; i++){
        dict[w.at(i)]++;
    }

    bool flg = true;
    for (auto p: dict){
        auto value = p.second;

        if (value%2 != 0) flg = false;
    }

    if (flg == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}