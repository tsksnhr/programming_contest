// Priority Queue

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MAX_HEAP_SIZE = 2000000 + 3;
const ll INF = 2000000000;

void print(ll *array_for_heap, ll heap_size){

    for (ll i = 1; i <= heap_size; i++) cerr << " " << array_for_heap[i];
    cerr << endl;

    return;
}

// DOWN
void MakeMaxHeap(ll *array_for_heap, ll heap_size, ll idx){

    ll left_idx, right_idx, largest_idx;
    left_idx = idx*2;
    right_idx = idx*2 + 1;
    largest_idx = idx;

    if ((left_idx > 0 && left_idx <= heap_size) && (array_for_heap[left_idx] > array_for_heap[largest_idx])){
        largest_idx = left_idx;
    }
    if ((right_idx > 0 && right_idx <= heap_size) && (array_for_heap[right_idx] > array_for_heap[largest_idx])){
        largest_idx = right_idx;
    }

    if (largest_idx != idx){
        swap(array_for_heap[idx], array_for_heap[largest_idx]);
        MakeMaxHeap(array_for_heap, heap_size, largest_idx);
    }

    return;
}

void Insert(ll *array_for_heap, ll *heap_size, ll key){

    (*heap_size)++;
    ll idx = *heap_size;
    array_for_heap[idx] = key;

    // UP
    while (idx/2 > 0  && array_for_heap[idx] > array_for_heap[idx/2]){
        swap(array_for_heap[idx], array_for_heap[idx/2]);
        idx = idx/2;
    }

    return;
}

ll Extract(ll *array_for_heap, ll *heap_size){

    if (*heap_size < 1) return -1;

    ll ret = array_for_heap[1];
    array_for_heap[1] = array_for_heap[*heap_size];
    (*heap_size)--;
    
    MakeMaxHeap(array_for_heap, *heap_size, 1);

    return ret;
}

int main(){

    ll array_for_heap[MAX_HEAP_SIZE];
    ll heap_size = 0;

    while (true){
        string str;
        cin >> str;

        if (str == "insert"){
            ll key;
            cin >> key;
            Insert(array_for_heap, &heap_size, key);
        }
        else if (str == "extract"){
            cout << Extract(array_for_heap, &heap_size) << endl;
        }
        else{
            break;
        }

        print(array_for_heap, heap_size);
    }

    return 0;
}