#include <bits/stdc++.h>
using namespace std;

int main(){

    int input_num;
    cin >> input_num;

    int count_a, count_b, count_c;
    int ans = 0;
    int ans_buf = 0;
    int sum = 0;

    for (count_a=1; count_a<=input_num; count_a++){
        for (count_b=1; count_b<=input_num; count_b++){
            for (count_c=1; count_c<=input_num; count_c++){
                ans_buf = __gcd(count_a, count_b);
                ans = __gcd(count_c, ans_buf);
                sum += ans;
            }
        }
    }

    cout << sum << endl;
    return 0;
}