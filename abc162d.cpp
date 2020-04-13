#include <bits/stdc++.h>
using namespace std;

int main(){

    int input_num;
    cin >> input_num;

    string str;
    cin >> str;

    int count_i, count_j, count_k;
    char si, sj, sk;
    int ans = 0;

    for (count_i=0; count_i < input_num; count_i++){
        for (count_j = count_i + 1; count_j < input_num; count_j++){
            for (count_k = count_j + 1; (count_k < input_num) /*&& ((count_j - count_i) != (count_k - count_j))*/; count_k++){
//                count_k = input_num - count_i - count_j;
                si = str.at(count_i);
                sj = str.at(count_j);
                sk = str.at(count_k);

                if ((si != sj) && (sj != sk) && (sk != si)){
                    if ((count_j - count_i) != (count_k - count_j)){
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}