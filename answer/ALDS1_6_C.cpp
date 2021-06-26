// Quick Sort

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll INF = 1e10;

typedef struct dataset{

    char ch;
    ll num;

} card, *p_card;
card trump[100007];
card trump_alt[100007];

//Merge-sort
void merge(card *trump, int left, int middle, int right){

    int n1 = middle - left;
    int n2 = right - middle;

    card L[100003], R[100003];
    for (int i = 0; i < n1; i++) L[i] = trump[left + i];
    for (int i = 0; i < n2; i++) R[i] = trump[middle + i];

    int i = 0, j = 0;
    L[n1].num = INF;
    R[n2].num = INF;
    for (int k = left; k < right; k++){
        if (L[i].num <= R[j].num){
            trump[k] = L[i];
            i++;
        }
        else{
            trump[k] = R[j];
            j++;
        }
    }

    return;
}

void mergesort(card *trump, int left, int right){

    int middle = (left + right)/2;
    
    if (left + 1 < right){
        mergesort(trump, left, middle);
        mergesort(trump, middle, right);
        merge(trump, left, middle, right);
    }

    return;
}

// Quick-sort
int partition(card *trump, int p, int r){

    ll x = (trump[r]).num;
    int i = p - 1;

    for (int j = p; j < r; j++){
        if ((trump[j]).num <= x){
            i++;

            card t = trump[i];
            trump[i] = trump[j];
            trump[j] = t;
//            swap(trump[i], trump[j]);
        }
    }
    i++;
//    swap(trump[i], trump[r]);
    card t = trump[i];
    trump[i] = trump[r];
    trump[r] = t;

    return i;
}

void quicksort(card *trump, int p, int r){

//    cerr << p << " " << r << endl;
    if (p < r){
        int q = partition(trump, p, r);
        quicksort(trump, p, q-1);
        quicksort(trump, q+1, r);
    }

    return;
}

int main(){

    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        char c;
        ll a;
        cin >> c >> a;
        (trump[i]).ch = c;
        (trump[i]).num = a;
        (trump_alt[i]).ch = c;
        (trump_alt[i]).num = a;
    }
//    trump[N].num = INF;

    quicksort(trump, 0, N-1);
    mergesort(trump_alt, 0, N);

    bool is_stable = true;
    for (int i = 0; i < N; i++){
        if (trump[i].ch != trump_alt[i].ch){
            is_stable = false;
            break;
        }
    }
    if (is_stable) cout << "Stable" << endl;
    else cout << "Not stable" << endl; 

    for (int i = 0; i < N; i++){
        cout << trump[i].ch << " " << trump[i].num << endl;
    }

    return 0;
}