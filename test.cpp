#include <bits/stdc++.h>
using namespace std;

double expectation(double num, double num_mem);

int main(){

    int a;
    double ans;
    cin >> a;

    ans = expectation(a, a);

    cout << ans << endl;

    return 0;
}

//  繰り返し2乗法
double expectation(double num, double num_mem){

    if (num == 1){
        return 1/num_mem;
    }
    else{
        return (num/num_mem) + expectation(num-1, num_mem);
    }
}