#include <bits/stdc++.h>
using namespace std;

int main(){

    int input_num;
    cin >> input_num;

    int g_num;
    g_num = input_num/2;

    int i;
    vector<int> input_vec(input_num);
    for (i=0; i<input_num; i++){
        cin >> input_vec.at(i);
    }

    int64_t sum_a = 0;
    int64_t sum_b = 0;
    int64_t sum_c = 0;

    int count=0;

    for (i=0; (count<g_num) && (i<input_num); i+=2){
        sum_a += input_vec.at(i);
        count++;
    }

    count = 0;

    for (i=1; (count<g_num) && (i<input_num); i+=2){
        sum_b += input_vec.at(i);
        count++;
    }

    count = 0;

    for (i=2; (count<g_num) && (i<input_num); i+=2){
        sum_c += input_vec.at(i);
        count++;
    }

    cout << sum_a << " " << sum_b << " " << sum_c << endl;

    cout << max(sum_c, max(sum_a, sum_b)) << endl;
    return 0;
}