#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    int64_t temp;
    map<int64_t, int64_t> count;

    for (int i=0; i<N; i++){
        cin >> temp;
        count[temp]++;
    }

    int flg = 0;
    for (auto p: count){
        if (p.second > 1){
            flg = 1;
        }
    }

    if (flg == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    return 0;
}