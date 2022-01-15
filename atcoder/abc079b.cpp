#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N,i;
    int64_t L_a;
    int64_t L_b;
    
    cin >> N;

    L_a = 2;
    L_b = 1;

    for (i=2; i<N+1; i++){

        if (i%2 == 0){
            L_a += L_b;             // 漸化式
        }
        else{
            L_b += L_a;             // 漸化式
        }
    }

    if (N%2 == 0){
        cout << L_a << endl;
    }
    else{
        cout << L_b << endl;
    }

    return 0;
}