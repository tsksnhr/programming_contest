#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, L;
    cin >> N >> L;
    map<string, int> dict;
    for (int i=0; i<N; i++){
        string buf;
        cin >> buf;
        dict[buf]++;
    }

    string ans = "";
    for (auto p: dict){
        auto key = p.first;
        auto value = p.second;
        ans += key;

        if (value != 1){
            for (int i=1; i<value; i++) ans += key;
        }
    }

    cout << ans << endl;
    return 0;
}