// Tree Walk

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int NIL = -1;

typedef struct NodeData{

    int parent = NIL;
    int left = NIL;
    int right = NIL;

} Node;

void SetData(Node *trees, int node_id, int left, int right){

    // set children
    trees[node_id].left = left;
    trees[node_id].right = right;

    // set parent
    if (trees[node_id].left != NIL){
        trees[left].parent = node_id;
    }
    if (trees[node_id].right != NIL){
        trees[right].parent = node_id;
    }

    return;
}

void Preorder(Node *trees, int node_id, bool *used, int *cnt){

    used[node_id] = true;
    if (*cnt != 0) cout << " ";
    cout << node_id;
    (*cnt)++;

    if (trees[node_id].left != NIL) Preorder(trees, trees[node_id].left, used, cnt);
    if (trees[node_id].right != NIL) Preorder(trees, trees[node_id].right, used, cnt);

    return;
}

void Inorder(Node *trees, int node_id, bool *used, int*cnt){
    
    if (trees[node_id].left != NIL) Inorder(trees, trees[node_id].left, used, cnt);

    used[node_id] = true;
    if (*cnt != 0) cout << " ";
    cout << node_id;
    (*cnt)++;

    if (trees[node_id].right != NIL) Inorder(trees, trees[node_id].right, used, cnt);

    return;
    
}

void Postorder(Node *trees, int node_id, bool *used, int*cnt){
    
    if (trees[node_id].left != NIL) Postorder(trees, trees[node_id].left, used, cnt);
    if (trees[node_id].right != NIL) Postorder(trees, trees[node_id].right, used, cnt);

    used[node_id] = true;
    if (*cnt != 0) cout << " ";
    cout << node_id;
    (*cnt)++;

    return;
    
}

int main(){

    int N;
    cin >> N;
    Node trees[30];
    bool used[30];
    for (int i = 0; i < N; i ++){
        int node_id, left, right;
        cin >> node_id >> left >> right;
        SetData(trees, node_id, left, right);

        used[node_id] = false;
    }

    int cnt = 0;
    for (int i = 0; i < N; i++){
//        cerr << "i = " << i << endl;
        if (trees[i].parent != NIL) continue;
        
        cout << "Preorder" << endl;
        cout << " ";
        Preorder(trees, i, used, &cnt);
        cnt = 0;
        cout << endl;

        cout << "Inorder" << endl;
        cout << " ";
        Inorder(trees, i, used, &cnt);
        cnt = 0;
        cout << endl;

        cout << "Postorder" << endl;
        cout << " ";
        Postorder(trees, i, used, &cnt);
        cout << endl;
    }

    return 0;
}