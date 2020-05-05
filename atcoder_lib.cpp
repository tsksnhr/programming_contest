#include <bits/stdc++.h>
using namespace std;

//  階乗計算
//  組み合わせ計算(pCr)に使用する
//  p：総数、c：選ぶ数、div：剰余計算時の割る数
int64_t kaijo(int64_t P, int64_t C, int64_t div){

    if (C == 0){
        return 1%div;
    }
    else{
        return ( P*kaijo(P-1, C-1, div) )%div;
    }
}

//  繰り返し2乗法
//  累乗計算を高速に実施できる
//  a：底、dim：次数、div：剰余計算時の割る数
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