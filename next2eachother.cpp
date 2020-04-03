#include <bits/stdc++.h>
using namespace std;

int main(void){

    vector<int> A(5);
    int i, flg;

    flg = 0;

    for (i=0; i<5; i++){
        cin >> A.at(i);
    }

    for (i=0; i<4; i++){
        if (A.at(i) == A.at(i+1)){
            flg = 1;
            cout << "YES" << endl;
            break;
        }
    }
    if (flg == 0){
        cout << "NO" << endl;
    }

    return 0;
}