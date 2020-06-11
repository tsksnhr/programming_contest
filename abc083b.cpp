#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            for (int k=0; k<10; k++){
                for (int l=0; l<10; l++){
                    int digit_sum = i + j + k + l;
                    int buf = 1000*i + 100*j + 10*k + l;

                    if (buf > n){
                        cout << sum << endl;
                        return 0;
                    }
                    if ((digit_sum >= a) && (digit_sum <= b)) sum += buf;
                }
            }
        }
    }

    // n==9999 or 10000でループ脱出するので、ループ内で処理できない10000について処理
    if ((a == 1) && (n == 10000)){
        sum += 10000;
    }
    //  表示がここじゃない場合、9999 36 36のケースで出力がなくなる
    cout << sum << endl;
    return 0;
}