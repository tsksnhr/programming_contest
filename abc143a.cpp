#include <bits/stdc++.h>
using namespace std;

int A,B;

int main(){

    cin >> A >> B;

    if (A > 2*B){
        cout << A - 2*B << endl;
    }
    else{
        cout << 0 << endl;
    }

    return 0;
}