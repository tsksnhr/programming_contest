#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    map<string, int> s_map;
    string temp;

    //  文字列と出現頻度を記録
    for (int i=0; i<N; i++){
        cin >> temp;
        s_map[temp]++;
    }

    //  出てきた文字列の最大頻度を計算
    int max_num = 0;
    for (auto p: s_map){
        if (max_num < p.second){
            max_num = p.second;
        }
    }

//    sort(s_map.begin(), s_map.end());

    //  最大頻度の文字列を出力(mapのforループではkeyの小さいほうからループする)
    for (auto p: s_map){
        if (max_num == p.second){
            cout << p.first << endl;
        }
    }

    return 0;
}