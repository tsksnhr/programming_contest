// Merge Sort

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll INF = 1e9 + 7;

ll target_array[500010];
//int left, middle, right;
ll cnt = 0;

void merge(ll *target_array, int left, int middle, int right){

    int n1 = middle - left;
    int n2 = right - middle;

    ll L[500010];
    ll R[500010];
    for (int i = 0; i < n1; i++){
        L[i] = target_array[left + i]; 
    }
    for (int i = 0; i < n2; i++){
        R[i] = target_array[middle + i]; 
    }

    int i = 0, j = 0;
    L[n1] = INF;
    R[n2] = INF;
    for (int k = left; k < right; k++){
        cnt++;
//        cerr << L[i] << " " << R[j] << endl;
        if (L[i] <= R[j]){
            target_array[k] = L[i];
            i++;
        }
        else{
            target_array[k] = R[j];
            j++;
        } 
//        cerr << "sorted_array[" << k << "] = " << target_array[k] << endl;
    }

    return;
}

void mergesort(ll *target_array, int left, int right){

    int middle = (left + right)/2;

    if (left + 1 < right){
        mergesort(target_array, left, middle);
        mergesort(target_array, middle, right);
        merge(target_array, left, middle, right);
    }

    return;
}

int main(){

    int N;
//    scanf("%d", &N);
    cin >> N;
    for (int i = 0; i < N; i++){
//        ll tmp;
//        scanf("%lld", &tmp);
        cin >> target_array[i];
//        target_array[i] = tmp;
    }

    mergesort(target_array, 0, N);
    for (int i = 0; i < N; i++){
        if (i != 0) cout << " ";
        cout << target_array[i];
    }
    cout << endl;
    cout << cnt << endl;

    return 0;
}