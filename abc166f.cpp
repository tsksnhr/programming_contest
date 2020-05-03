#include <bits/stdc++.h>
using namespace std;

int main(){

    int64_t N, A, B ,C;
    cin >> N >> A >> B >> C;

    int i, j;
    int64_t count_a=0, count_b=0, count_c=0;
    string S;
    for (i=0; i<N; i++){
        cin >> S;
        for (j=0; j<2; j++){
            if (S.at(j) == 'a'){
                count_a++;
            }
            if (S.at(j) == 'b'){
                count_b++;
            }
            if (S.at(j) == 'c'){
                count_c++;
            }
        }
    }

    int64_t diff_a, diff_b, diff_c;
    diff_a = A - count_a;
    diff_b = B - count_b;
    diff_c = C - count_c;

    






}