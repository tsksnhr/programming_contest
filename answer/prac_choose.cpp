#include <bits/stdc++.h>
using namespace std;

int64_t kaijo(int64_t P, int64_t C);

int main(){
    
    int64_t P, C, ans;
    int64_t X, Y;
    cin >> P >> C;

    X = kaijo(P, C);
    Y = kaijo(C, C);
    ans = X/Y;

    cout << X << endl;
    cout << Y << endl;
    cout << ans << endl;
    return 0;
}

int64_t kaijo(int64_t P, int64_t C){

    if (C == 0){
        return 1;
    }
    else{
        return P*kaijo(P-1, C-1);
    }
}