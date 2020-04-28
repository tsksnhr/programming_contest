#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    vector<int> A(N);
    int i;
    
    for (i=0; i<N; i++){
        cin >> A.at(i);
    }

    //  普通に2重ループで同じ数値を探すとO(N^2)なのでTLEになる
}