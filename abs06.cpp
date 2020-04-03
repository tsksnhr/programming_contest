#include <bits/stdc++.h>
using namespace std;

int main(void){

    int n, a, b;
    int i, sum, temp0, temp1, temp2, temp3, temp4, temp_sum;

    sum = 0;
    temp0 = 0;
    temp1 = 0;
    temp2 = 0;
    temp3 = 0;
    temp4 = 0;
    temp_sum = 0;

    cin >> n >> a >> b;

    for (i=1; i<=n; i++){

        temp4 = i/10000;
        temp3 = (i-temp4*10000)/1000;
        temp2 = (i-temp4*10000-temp3*1000)/100;
        temp1 = (i-temp4*10000-temp3*1000-temp2*100)/10;
        temp0 = i-temp4*10000-temp3*1000-temp2*100-temp1*10;

        temp_sum = temp0 + temp1 + temp2 + temp3 + temp4;

        if ((temp_sum>=a) && (temp_sum<=b)){
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}