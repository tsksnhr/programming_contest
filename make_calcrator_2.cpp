#include <bits/stdc++.h>
using namespace std;

int main(void){
    
    int N, a, b, i;
    string op;

    cin >> N >> a;

    for (i = 0; i < N; i++){
        
        cin >> op >> b;
        
        if (op == "+"){
            a += b;
        }
        else if (op == "-"){
            a -= b;
        }
        else if (op == "*"){
            a *= b;
        }
        else if (b == 0){
            cout << "error" << endl;
            break;
        }
        else{
            a /= b;
        }

        cout << i + 1 << ":" << a << endl;
    }

    return 0;
}