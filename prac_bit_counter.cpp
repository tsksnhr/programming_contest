#include <bits/stdc++.h>
using namespace std;

int counter(int num){
    //  数値が全部0であれば再帰終了
    if (num == 0){
        return 0;
    }
    //  LSBと1でand演算、1であればカウント
    //  右ビットシフトして再帰
    return counter(num >> 1) + (num & 1);
}

int main(){

    int n = 0b11010101; //  0bで2進数表示
    int cnt = 0;
    cnt = counter(n);
    cout << cnt << endl;
}