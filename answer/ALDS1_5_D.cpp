// The Number of Invertions

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll INF = 1e9 + 7;

ll A[200007];

void merge(ll *A, int left, int middle, int right, ll &cnt){

    int n1 = middle - left;
    int n2 = right - middle;

    ll L[200007];
    ll R[200007];
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[middle + i];

    int i = 0, j = 0;
    L[n1] = INF;
    R[n2] = INF;
    for (int k = left; k < right; k++){
        if (L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;

            cnt += n1 - i;
        }
    }

    return;
}

void mergesort(ll *A, int left, int right, ll &cnt){

    int middle = (left + right)/2;
    if (left + 1 < right){
        mergesort(A, left, middle, cnt);
        mergesort(A, middle, right, cnt);
        merge(A, left, middle, right, cnt);
    }

    return;
}

void print_array(ll *A, int size){

    for (ll i = 0; i < size; i++){
        if (i != 0) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

int main(){

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];

    ll cnt = 0;
    mergesort(A, 0, N, cnt);

    cout << cnt << endl;
//    print_array(A, N);
    return 0;
}
