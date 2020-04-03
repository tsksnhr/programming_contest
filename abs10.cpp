#include <bits/stdc++.h>
using namespace std;

int main(void){

    string S;
    cin >> S;

    char c0, c1, c2, c3;
    int i, N, er_count;
    int flg;
    N = S.size();

    flg = 0;
    er_count = 0;

    for (i=0; i<N-1; i++){

        c0 = S.at(i);
        c1 = S.at(i+1);

        if (c0 == 'd'){
            if (c1 == 'r'){
                er_count = 0;
                continue;
            }
            else{
                flg = 1;
                break;
            }
        }
        if (c0 == 'm'){
            if ((c1 == 'e') || (c1 == 'd')){
                er_count = 0;
                continue;
            }
            else{
                flg = 1;
                break;
            }
        }
        if (c0 == 's'){
            if (c1 == 'e'){
                er_count = 0;
                continue;
            }
            else{
                flg = 1;
                break;
            }
        }
        if (c0 == 'r'){
            if ((c1 == 'e') || (c1 == 'a') || (c1 == 'd')){
                if ((er_count >=2) && (c1 != 'a')){
                    flg = 1;
                    break;
                }
                continue;
            }
            else{
                flg = 1;
                break;
            }
        }
        if (c0 == 'e'){
            if ((c1 == 'a') || (c1 == 'd') || (c1 == 'e')){
                continue;
            }
            else if ((c1 == 'r')){
                er_count++;
                continue;
            }
            else{
                flg = 1;
                break;
            }
        }
        if (c0 == 'a'){
            if ((c1 == 'm') || (c1 == 's')){
                er_count = 0;
                continue;
            }
            else{
                flg = 1;
                break;
            }
        }
    }

    if ((N < 4) || ((N<10) && (er_count >=2))){
        flg = 1;
    }

    for (i=0; i<N-3; i++){
        c0 = S.at(i);
        c1 = S.at(i+1);
        c2 = S.at(i+2);
        c3 = S.at(i+3);
        if ((c0 == 'e') && (c1 == 'r') && (c2 == 'a') && (c3 == 'm')){
            flg = 1;
            break;
        }
    }

    if (flg == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    return 0;
}