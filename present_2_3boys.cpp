#include <bits/stdc++.h>
using namespace std;

vector<int> input(vector<int> vec);
int sum(vector<int> sum);

int main(void){

    int N, sum_A, sum_B, sum_C, ans;
    cin >> N;

    sum_A = 0;
    sum_B = 0;
    sum_C = 0;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);

    A = input(A);
    B = input(B);
    C = input(C);

    sum_A = sum(A);
    sum_B = sum(B);
    sum_C = sum(C);

    ans = sum_A*sum_B*sum_C;

    cout << ans << endl;

    return 0;
}

vector<int> input(vector<int> vec){

    int i, N;

    N = vec.size();

    for (i=0; i<N; i++){
        cin >> vec.at(i);
    }

    return vec;
}

int sum(vector<int> vec){

    int i, N, sum;

    N = vec.size();
    sum = 0;

    for (i=0; i<N; i++){
        sum += vec.at(i);
    }

    return sum;
}