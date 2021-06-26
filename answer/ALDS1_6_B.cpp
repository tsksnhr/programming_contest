// Partition

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int INF = 100007;

int A[100007];

int partition(int *A, int p, int r){

    int x = A[r];
    int i = p - 1;

    for (int j = 0; j < r; j++){
        if (A[j] <= x){
            i++;
            swap(A[j], A[i]);
        }
    }
    i++;
    swap(A[i], A[r]);

    return i;
}

int main(){

    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    A[N] = INF;

    int pos = partition(A, 0, N-1);
    for (int i = 0; i < N; i++){
        if (i != 0) cout << " ";
        if (i == pos) cout << "[";
        cout << A[i];
        if (i == pos) cout << "]";
    }
    cout << endl;

    return 0;
}