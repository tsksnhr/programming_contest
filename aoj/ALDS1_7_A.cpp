// Rooted Trees

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int NIL = -1;

typedef struct NodeData{

    int parent = NIL;
    int left_child = NIL;
    int right_sibling = NIL;

}Node, *pNode;

Node Trees[100003];
int depth[100003];

void SetChild(Node *Trees, int node_id, int left_child){

    Trees[node_id].left_child = left_child;
    Trees[left_child].parent = node_id;

    return;
}

void SetSibling(Node *Trees, int node_id, int right_sibling){

    Trees[node_id].right_sibling = right_sibling;
    Trees[right_sibling].parent = Trees[node_id].parent; 

    return;
}

void SetDepth(int *depth, Node *Trees, int node_id, int now_depth){

    depth[node_id] = now_depth;
    cerr << "debug: " << node_id << now_depth << endl;
    
    int next_sibling = Trees[node_id].right_sibling;
    int next_child = Trees[node_id].left_child;

    if (next_sibling != NIL) SetDepth(depth, Trees, next_sibling, now_depth);
    if (next_child != NIL) SetDepth(depth, Trees, next_child, now_depth + 1);

    return;
}

void ShowNodeAttidude(Node *Trees, int node_id){

    if (Trees[node_id].parent == NIL) cout << "root";
    else if (Trees[node_id].left_child == NIL) cout << "leaf";
    else cout << "internal node";

    return;
}

void ShowChildren(Node *Trees, int node_id){

    int child_layer = Trees[node_id].left_child;
    if (child_layer == NIL) return;
    else cout << child_layer;

    while (Trees[child_layer].right_sibling != NIL){
        cout << ", " << Trees[child_layer].right_sibling;
        child_layer = Trees[child_layer].right_sibling;
    }

    return;
}

int main(){

    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        int node_id, j_lim;
        cin >> node_id >> j_lim;
        for (int j = 0; j < j_lim; j++){
            int target;
            cin >> target;
            if (j == 0) SetChild(Trees, node_id, target);
            else SetSibling(Trees, node_id, target);
            node_id = target;
        }
    }
    for (int i = 0; i < N; i++){
        if (Trees[i].parent != NIL) continue;
        SetDepth(depth, Trees, i, 0);
    }

    for (int i = 0; i < N; i++){
        cout << "node " << i << ": ";
        cout << "parent = " << Trees[i].parent << ", ";
        cout << "depth = " << depth[i] << ", ";
        ShowNodeAttidude(Trees, i);
        cout << ", [";
        ShowChildren(Trees, i);
        cout << "]";
        cout << endl;
    }

    return 0;
}
