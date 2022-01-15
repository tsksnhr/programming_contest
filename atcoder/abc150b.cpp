#include <bits/stdc++.h>
using namespace std;

int N, cnt = 0;
string S, tmp;

int main(){

    cin >> N >> S;

    //  文字列のアクセス範囲に注意すること
    for (int i=0; i<N-2; i++){
        if ((S.at(i)=='A') && (S.at(i+1)=='B') && (S.at(i+2)=='C')){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}