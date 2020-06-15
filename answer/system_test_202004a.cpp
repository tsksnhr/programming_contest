#include <bits/stdc++.h>
using namespace std;

int main(void){

    int S, L, R;
    cin >> S >> L >> R;

    if (S <= L){
        cout << L << endl;
    }
    else if (S >= R){
        cout << R << endl;
    }
    else{
        cout << S << endl;
    }

    return 0;
}