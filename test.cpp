#include <bits/stdc++.h>
using namespace std;

int exp(int a, int b){

    if (b == 0) return 1;

    return a*exp(a, b-1);
}

int main(){

    int a, b;
    cin >> a >> b;

    cout << exp(a, b);
    return 0;
}