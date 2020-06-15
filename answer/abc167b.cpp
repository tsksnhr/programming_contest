#include <bits/stdc++.h>
using namespace std;

long long a, b, c, k;

int main(){
    
    cin >> a >> b >> c >> k;

    long long sum = 0;

    if (k <= a){
        sum = k;
    }
    else if (k <= a+b){
        sum = a;
    }
    else{
        sum = a - (k-(a+b));
    }

    cout << sum << endl;
    return 0;
}