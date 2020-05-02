#include <bits/stdc++.h>
using namespace std;

int main(){

    int A,B;
    cin >> A >> B;

    int ans_a, ans_b, ans_temp;
    ans_a = A*(25.0/2.0);
    ans_b = B*10.0;
    /*
    cout << (int)(ans_a*0.1) << " " << B << endl;
    cout << (int)(ans_b*0.08) << " " << A << endl;
    */

    // a, bの両方え小数点切り捨てが起きている場合はこの処理では計算できない・・・
    if (((int)(ans_a*0.1) == B) && ((int)(ans_b*0.08) == A)){
        cout << min(ans_a, ans_b) << endl;
    }
    else if ((int)(ans_a*0.1) == B){
        if ((int)(ans_a*0.08) == A){
        cout << ans_a << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else if ((int)(ans_b*0.08) == A){
        if ((int)(ans_b*0.1) == B){
        cout << ans_b << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}