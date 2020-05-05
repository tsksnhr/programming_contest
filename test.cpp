#include <bits/stdc++.h>
using namespace std;

int64_t modpow(int64_t a, int64_t dim, int64_t div);

int main(){

    int a, dim, div, ans;
    cin >> a >> dim;
    div = 1e9 + 7;

    ans = modpow(a, dim, div);

    cout << ans << endl;

    return 0;
}

//  繰り返し2乗法
int64_t modpow(int64_t a, int64_t dim, int64_t div){

    if (dim == 1){
        return a%div; 
    }
    else if (dim%2 != 0){
        return ( a*modpow(a, dim-1, div) )%div;
    }
    else{
        return ( modpow(a, dim/2, div) * modpow(a, dim/2, div) )%div;
    }
}