#include <bits/stdc++.h>
using namespace std;

int exponentiation(int num){

    int ans = 1;

    if (num == 0) ans = 0;
    else{
        for (int i=1; i<=num; i++) ans *= i;        
    }

    return ans;
}

int main(){

    int a;
    cin >> a;

    cout << exponentiation(a) << endl;
    return 0;
}