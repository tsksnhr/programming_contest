#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    //  組み合わせ数を入れる場合は、int型だとオーバーフローする可能性があるので、int64_t型を用いる
    vector<int> input_array(N);
    vector<int64_t> sum_array(N);
    vector<int64_t> c_array(N);
    vector<int64_t> ans_array(N);
    int i;
    int64_t temp = 0;
    int64_t sum = 0;
    int64_t c_temp = 0;
    int64_t sum_buf = 0;
    
    //  入力と同じ数値の回数を記録する配列を確保
    for (i=0; i<N; i++){
        cin >> input_array.at(i);
        sum_array.at(input_array.at(i)-1)++;
    }

    //  組み合わせ数の配列を確保し、組み合わせ数の総和を計算
    for (i=0; i<N; i++){
        if (sum_array.at(i)<2){
            c_array.at(i) = 0;
        }
        else{
            c_array.at(i) = (sum_array.at(i)*(sum_array.at(i)-1))/2;
        }
        sum += c_array.at(i);
    }

    for (i=0; i<N; i++){
        sum_buf = sum;
        temp = sum_array.at(input_array.at(i)-1) - 1;
        // cout << "temp = " << temp << endl;
        if (temp<2){
            c_temp = 0;
        }
        else{
            c_temp = ((temp)*(temp-1))/2;
        }
        /*
        cout << "c_array,at(input_array.at(i)) = " << c_array.at(input_array.at(i)) << endl;
        cout << "c_temp = " << c_temp << endl; 
        */
        sum_buf -= c_array.at(input_array.at(i)-1) - c_temp;
        ans_array.at(i) = sum_buf;
    }

    /*
    cout << "---sum_array--" << endl; 
    for (i=0; i<N; i++){
        cout << sum_array.at(i) << endl;
    }
    cout << "sum = " << sum << endl;
    */

    for (i=0; i<N; i++){
        cout << ans_array.at(i) << endl;
    }

    return 0;
}