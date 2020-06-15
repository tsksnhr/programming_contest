#include <bits/stdc++.h>
using namespace std;

int main(){

    string S;
    int N;
    cin >> S >>N;

    int order;
    int order_f;
    char buf;
    string S_first;
    string S_last;

    int reverse_flg = 0;

    for (int i=0; i<N; i++){
        cin >> order;

        if (order == 1){
            if (reverse_flg == 0){
                reverse_flg = 1;
            }
            else{
                reverse_flg = 0;
            }
        }

        if (order == 2){
            cin >> order_f >> buf;
            if (order_f == 1){
                if (reverse_flg == 0){
                    S_first = buf + S_first;
                }
                else{
                    S_last = S_last + buf;
                }
            }
            else{
                if (reverse_flg == 0){
                    S_last = S_last + buf;
                }
                else{
                    S_first = buf + S_first;
                }
            }
        }
    }

    if (reverse_flg == 0){
        cout << S_first + S + S_last << endl;
    }
    else{
        reverse(S.begin(), S.end());
        reverse(S_first.begin(), S_first.end());
        reverse(S_last.begin(), S_last.end());
        cout << S_last + S + S_first << endl;;
    }

    return 0;
}