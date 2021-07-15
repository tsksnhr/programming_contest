// Complete Binary Tree

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void print(ll *array_for_heap, int size_of_heap){

    for (int i = 1; i <= size_of_heap; i++){
        int parent_id = i/2;
        int left_id = 2*i;
        int right_id = 2*i + 1;

        cout << "node " << i << ": ";
        cout << "key = " << array_for_heap[i] << ", ";
        if (parent_id > 0) cout << "parent key = " << array_for_heap[parent_id] << ", ";
        if (left_id > 0 && left_id <= size_of_heap) cout << "left key = " << array_for_heap[left_id] << ", ";
        if (right_id > 0 && right_id <= size_of_heap) cout << "right key = " << array_for_heap[right_id] << ", ";
        cout << endl;
    }

    return;
}

int main(){

    int N;
    cin >> N;
    ll array_for_heap[N+1];
    for (int i = 1; i <= N; i++) cin >> array_for_heap[i];

    print(array_for_heap, N);

    return 0;
}