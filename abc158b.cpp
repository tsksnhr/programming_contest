#include <bits/stdc++.h>
using namespace std;

int main(){

    int64_t N, A, B;
    cin >> N >> A >> B;

    int64_t div, mod, temp;
    div = N/(A+B);
    mod = N%(A+B);
    temp = mod - A;

    if (temp>0){
        cout << (div+1)*A << endl;
        return 0;
    }
    else{
        cout << div*A+mod << endl;
        return 0;
    }    
}