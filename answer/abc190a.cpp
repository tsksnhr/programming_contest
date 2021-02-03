#include <bits/stdc++.h>
using namespace std;

int main(){

    int A, B, C;
    cin >> A >> B >> C;

    int dif = A - B;
    if (C == 0){
        if (dif > 0) cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;
    }
    else{
        if (dif < 0) cout << "Aoki" << endl;
        else cout << "Takahashi" << endl;
    }
    
    return 0;
}