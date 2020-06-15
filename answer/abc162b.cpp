#include <bits/stdc++.h>
using namespace std;

int main(){

    int input_num;
    cin >> input_num;

    int64_t sum = 0;
    int i;

    for (i=1; i<=input_num; i++){
        
        if ((i%3 == 0) && (i%5 == 0)){
            continue;
        }
        else if (i%3 == 0) {
            continue;
        }
        else if (i%5 == 0) {
            continue;
        }
        else{
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}
