#include <bits/stdc++.h>
using namespace std;

int A, B;

int main(){

    cin >> A >> B;

    if ((A < 10) && (B < 10)){
        cout << A*B << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}