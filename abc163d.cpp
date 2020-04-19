#include <bits/stdc++.h>
using namespace std;

int main(){

    int num;
    int choice;
    cin >> num >> choice;

    int64_t i;
    int64_t temp_a = 1;
    int64_t temp_b = 1;
    int64_t temp_c = 1;
    int64_t combo_num = 0;
    int64_t choice_buf = choice;

    //  組合せ計算
    for (i=(num+1); i>0; i--){
        temp_a *= i;
    }

    while(choice <= (num+1)){
        for (i=((num+1)-choice); i>0; i--){
            temp_b *= i;
        }
        for (i=choice; i>0; i--){
            temp_c *= i;
        }
        combo_num += temp_a/(temp_b*temp_c);
        choice++;
        temp_b = 1;
        temp_c = 1;
    }
    if (num+1 <= choice_buf){
        combo_num++;
    }

    //  和が等しい組合せを消去


    cout << combo_num << endl;

    return 0;
}