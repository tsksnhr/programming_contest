#include <bits/stdc++.h>
using namespace std;

long long binary_exponentiation(long long a, long long x){

    if (x == 0) return 1;
    else if (x%2 != 0) return a*binary_exponentiation(a, x-1);
    else return binary_exponentiation(a, x/2)*binary_exponentiation(a, x/2);
}

long long binary_exponentiation(long long a, long long x, long long div){

    if (x == 0) return 1;
    else if (x%2 != 0) return ((a%div)*binary_exponentiation(a, x-1, div))%div;
    else return ((binary_exponentiation(a, x/2, div)%div)*(binary_exponentiation(a, x/2, div)%div))%div;
}

int main(){

    long long a;
    long long x;
    cin >> a >> x;

    long long div = 1e9+7;

    cout << binary_exponentiation(a, x) << endl;
    cout << binary_exponentiation(a, x)%div << endl;
    cout << binary_exponentiation(a, x, 1e9+7) << endl;
    return 0;
}