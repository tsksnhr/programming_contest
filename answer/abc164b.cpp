#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int a_buf, c_buf;
    a_buf = a;
    c_buf = c;

    int w_flg, l_flg;
    w_flg = 0;
    l_flg = 0;

    while((a_buf>0) && (c_buf>0)){
        c_buf -= b;
        if (c_buf<=0){
            w_flg = 1;
            break;
        }
        a_buf -= d;
        if (a_buf <= 0){
            l_flg = 1;
            break;
        }
    }

    if (w_flg == 1){
        cout << "Yes" << endl;
        return 0;
    }
    if (l_flg == 1){
        cout << "No" << endl;
        return 0;
    }
}