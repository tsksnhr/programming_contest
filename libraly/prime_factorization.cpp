#include <bits/stdc++.h>
using namespace std;

void prime_factorization(int buf, map<int, int> &divisor){

    int div;
    int thr = sqrt(buf);

    if (buf == 1) {
        divisor[0]++;
        return;
    }
    else {
        for (div=2; div<thr+1; div++){
            while (buf%div == 0){
                buf /= div;
                divisor[div]++;
            }
        }

        if (buf != 1) {
            divisor[buf]++;
        }
    }
    return;
}

int main(){

    int test;
    cin >> test;
    map<int, int> divisor;

    prime_factorization(test, divisor);

    cout << "--- Prime Factorization ---" << endl;
    for (auto p: divisor){
        auto key = p.first;
        auto value = p.second;

        cout << key << "*" << value << endl;
    }
    return 0;
}
