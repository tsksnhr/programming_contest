#include <bits/stdc++.h>
using namespace std;

int main(){

    int64_t X;
    cin >> X;

    int64_t A, B;
    int64_t ans_A, ans_B;
    int64_t diff;

    for (A=-1000; A<1001; A++){
        for (B=-1000; B<1001; B++){
            ans_A = A*A*A*A*A;
            ans_B = B*B*B*B*B;
            diff = ans_A - ans_B;

            if (diff == X){
                cout << A << " " << B << endl;
                return 0;
            }
        }
    }
}