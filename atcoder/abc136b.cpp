#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int digit = 0, n_temp = n;
    while (n_temp != 0){
        n_temp /= 10;
        digit++;
    }

    int ans;

    if (digit == 1){
        cout << n << endl;
    }
    else if (digit == 2){
        cout << 9 << endl;
    }
    else if (digit == 3){
        cout << 9 + (n - 99) << endl;
    }
    else if (digit == 4){
        cout << 909 << endl;
    }
    else if (digit == 5){
        cout << 909 + (n - 9999) << endl;
    }
    else{
        cout << 90909 << endl;
    }

    return 0;
}