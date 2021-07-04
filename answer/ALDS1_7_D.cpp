// Reconstruction of the Tree

// TODO: solve

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef struct NodeData{

    int parent = -1;
    int left = -1;
    int right = -1;

} Node;

void GetNodeData(Node *tree, int node_id, int left, int right){

    tree[node_id].left = left;
    tree[node_id].right = right;

    if (left != -1) tree[left].parent = node_id;
    if (right != -1) tree[right].parent = node_id;

    return;
}

void SearchData(int size, int *pre_array, int *in_array, Node *tree, int left, int right){

    if (left + 1 >= right){
        return;
    }

    for (int i = 0; i < size; i++){
        for (int j = left; j < right; j++){
            int x = pre_array[i];
            int y = in_array[j];

            if (x == y){
                SearchData(size, pre_array, in_array, tree, left, j);
                SearchData(size, pre_array, in_array, tree, j, right);
            }
        }
    }
    return;
}

int main(){

    int N;
    cin >> N;
    Node tree[N];
    int preorder_array[N];
    int inorder_array[N];
    for (int i = 0; i < N; i++) cin >> preorder_array[i];
    for (int i = 0; i < N; i++) cin >> inorder_array[i];

    SearchData(N, preorder_array, inorder_array, tree, 0, N);
    return 0;
}
