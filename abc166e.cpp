#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    vector<int64_t> A(N);
    int64_t i;
    int64_t max=0;

    for (i=0; i<N; i++){
        cin >> A.at(i);

        if (max < A.at(i)){
            max = A.at(i);
        }
    }

    int64_t sum_max = max + max-1;
    int64_t loop_max;

    if (sum_max > N){
        loop_max = N;
    }
    else{
        loop_max = sum_max;
    }

    for (i=2; i<loop_max; i++){
        
    }


}
