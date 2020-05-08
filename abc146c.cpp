#include <bits/stdc++.h>
using namespace std;

long long ruijo(long long num, long long dim);
long long digit(long long dim);

long long a, b, x;

int main(){

    cin >> a >> b >> x;
    long long L = 0, R = 0, M = 0, n = 0, dn = 0, thr = 0;

    int tmp;
    bool flg = false;
    for (tmp = 0; tmp <= 9; tmp++){
        thr = a*ruijo(10, tmp) + b*digit(ruijo(10, tmp));
//        cout << "thr =\t" << thr << endl;     //  debug
//        cout << "x =\t" << x << endl;         //  debug
        if (x <= thr){
            flg = true;
            n = ruijo(10, tmp)-1;
            dn = digit(n);
            break;
        }
    }
    if (!flg){
        n = ruijo(10, tmp-1);
        dn = digit(n);
    }
//    cout << "n = " << n << "\tdn = " << dn << endl;       // debug

    if (dn == 0){
        cout << 0 << endl;
//        cout  << "nM = " << 0 << endl;
        return 0;
    }

    int nR, nL, nM;
    nR = n;
//    R = a*(ruijo(10, tmp)-1) + b*digit(ruijo(10, tmp));   // debug
    nL = ruijo(10, dn-1);
//    L = a*ruijo(10, dn-1) + b*(dn-1);                     // debug
    nM = (nL + nR)/2;

//  二分探索
    long long pL, pM, pR;
//    while (nR > nL){                                      // debug
    while ((nR >= nL) && (nL != nM) && (nM != nR)){
        pL = a*nL + b*dn;
        pM = a*nM + b*dn;
        pR = a*nR + b*dn;
//        cout << "nL = " << nL << "\tnM = " << nM << "\tnR = " << nR << endl;      //  debug
//        cout << "pL = " << pL << "\tpM = " << pM << "\tpR = " << pR << endl;      //  debug
        if (pM > x){
            nR = nM - 1;
            nM = (nL + nR)/2;
//            cout << pM << " > " << x << endl;     //  debug
        }
        else if (pM < x){
            nL = nM;
            nM = (nL + nR)/2;
//            cout << pM << " < " << x << endl;     //  debug
        }
        else{
            break;
        }
    }
//    cout << "last: " << "nL = " << nL << "\tnM = " << nM << "\tnR = " << nR << endl;      //  debbug
//    cout << "nM = " << nM << endl;        //  debug

    long long ans_n, ans_p;
    ans_p = a*nR + b*dn;
    if (ans_p <= x){
        ans_n = nR;
    }
    else{
        ans_n = nM;
    }

    cout << ans_n << endl;
    return 0;
}

//  累乗の計算
long long ruijo(long long num, long long dim){

    if (dim == 0){
        return 1;
    }
    else{
        return num*ruijo(num, dim-1);
    }
}

//  数値の桁数算出
long long digit(long long dim){

    long long digit = 0;

    while (dim){
        dim /= 10;
        digit++;
    }
    return digit;
}
