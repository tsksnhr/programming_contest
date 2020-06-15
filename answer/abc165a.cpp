#include <bits/stdc++.h>
using namespace std;

int main(){

    int K, A, B;
    cin >> K >> A >> B;

    int temp, flg=0;
    temp = A;

    while (temp<=B){
        if (temp%K == 0){
            cout << "OK" << endl;
            flg = 1;
            break;
        }
        temp++;
    }

    if (flg == 0){
        cout << "NG" << endl;
    }

    return 0;
}