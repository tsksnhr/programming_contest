#include <bits/stdc++.h>
using namespace std;

int main(void){

    int64_t n;
    int64_t k;
    cin >> n >> k;

    int64_t temp0;
    int64_t temp1;
    int64_t i;

    i=1;
    
    while (n > k){
        k *= i;
        i++;
    }

    temp0 = abs(n-k*(i));
    temp1 = abs(n-k*(i-1));

    cout << min(temp0, temp1) << endl;

    return 0;
}