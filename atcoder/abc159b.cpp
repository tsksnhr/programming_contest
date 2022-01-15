#include <bits/stdc++.h>
using namespace std;

string S;

int main(){

    cin >> S;
    int size, i, j;
    int flg_a=1, flg_b=1, flg_c=1;

    size = S.size();
    j = size-1; 

    for (i=0; i<size/2; i++){
        if (S.at(i) == S.at(j)){
            j--;
            continue;
        }
        else{
            flg_a = 0;
            break;
        }
    }

    j = size/2-1;
    for (i=0; i<((size/2)/2); i++){
        if (S.at(i) == S.at(j)){
            j--;
            continue;
        }
        else{
            flg_b = 0;
            break;
        }
    }

    j = size-1;
    for (i=size/2+1; i<(size/2+size/4+1); i++){
        if (S.at(i) == S.at(j)){
            j--;
            continue;
        }
        else{
            flg_c = 0;
            break;
        }
    }

    if (flg_a == 1 && flg_b == 1 && flg_c == 1){
        cout << "Yes" << endl;
        return 0;
    }
    else{
        cout << "No" << endl;
        return 0;
    }
}