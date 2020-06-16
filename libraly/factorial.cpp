#include <bits/stdc++.h>
using namespace std;

int factorial(int num){

    int ans = 1;

    if (num == 0) ans = 1;
    else{
        for (int i=1; i<=num; i++) ans *= i;        
    }

    return ans;
}

int main(){

    int a;
    cin >> a;

    cout << factorial(a) << endl;
    return 0;
}