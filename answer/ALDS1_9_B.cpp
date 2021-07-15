// Maximum Heap

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void print(ll *array_for_heap, ll heap_size){

    for (int i = 1; i <= heap_size; i++){
        cout << " " << array_for_heap[i];
    }
    cout << endl;

    return;
}

void MakeMaximumHeap(ll *array_for_heap, int heap_size, int idx){

    int left_id = 2*idx;
    int right_id = 2*idx + 1;
    int largest_idx = idx;

    if ((left_id > 0 && left_id <= heap_size) && (array_for_heap[left_id] > array_for_heap[largest_idx])){
        largest_idx = left_id;
    }
    if ((right_id > 0 && right_id <= heap_size) && (array_for_heap[right_id] > array_for_heap[largest_idx])){
        largest_idx = right_id;
    }

    if (largest_idx != idx){
        swap(array_for_heap[idx], array_for_heap[largest_idx]);
        MakeMaximumHeap(array_for_heap, heap_size, largest_idx);
    }

    return;
}

int main(){

    int N;
    cin >> N;
    ll array_for_heap[N+1];
    for (int i = 1; i <= N; i++) cin >> array_for_heap[i];

    for (int i = N+1/2; i > 0; i--) MakeMaximumHeap(array_for_heap, N, i);

    print(array_for_heap, N);

    return 0;
}
