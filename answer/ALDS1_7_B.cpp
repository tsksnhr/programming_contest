// Binary Tree

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int NIL = -1;

typedef struct NodeData{

    int parent = NIL;
    int left_child = NIL;
    int right_child = NIL;
    
    int degree = 0;
    int height = 0;
    int depth = 0;

} Node;

Node Trees[30];

void SetData(Node *Trees, int node_id, int left, int right){

    Trees[node_id].left_child = left;
    Trees[node_id].right_child = right;

    Trees[left].parent = node_id;
    Trees[right].parent = node_id;

    return;
}

void ShowAttribute(Node *Trees, int node_id){

    int parent_id = Trees[node_id].parent;
    if (parent_id == NIL){
        cout << "root";
        return;
    }

    bool is_left_none, is_right_none;
    is_left_none = Trees[node_id].left_child == NIL;
    is_right_none = Trees[node_id].right_child == NIL;
    if (is_right_none && is_left_none){
        cout << "leaf";
        return;
    }

    cout << "internal node";
    return;
}

void ShowParent(Node *Tree, int node_id){

    cout << Trees[node_id].parent;
    return;
}

void ShowSibling(Node *Trees, int node_id){

    int parent_id = Trees[node_id].parent;
    bool is_left_exist, is_right_exist;
    is_left_exist = Trees[parent_id].left_child != NIL;
    is_right_exist = Trees[parent_id].right_child != NIL;

    if (parent_id == NIL){
        cout << "sibling = " << NIL;
        return;
    }
    if (is_left_exist && is_right_exist){
        if (Trees[parent_id].left_child == node_id) cout << "sibling = " << Trees[parent_id].right_child;
        else cout << "sibling = " << Trees[parent_id].left_child;
    }
    else{
        cout << "sibling = " << NIL;
        return;
    }
    return;
}

void GetDepth(Node *Trees, int node_id, int now_depth){

    Trees[node_id].depth = now_depth;
    
    if (Trees[node_id].left_child != NIL) GetDepth(Trees, Trees[node_id].left_child, now_depth + 1);
    if (Trees[node_id].right_child != NIL) GetDepth(Trees, Trees[node_id].right_child, now_depth + 1);

    return;
}

void GetDegree(Node *Trees, int node_id){

    bool is_left_exist = Trees[node_id].left_child != NIL;
    bool is_right_exist = Trees[node_id].right_child != NIL;

    if (is_left_exist) Trees[node_id].degree++;
    if (is_right_exist) Trees[node_id].degree++;

    return;
}

void GetHeight(Node *Trees, int node_id, int now_height){

    Trees[node_id].height = max(now_height, Trees[node_id].height);

    if (Trees[node_id].parent != NIL) GetHeight(Trees, Trees[node_id].parent, now_height + 1);
    return;    
}

int main(){

    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        int node_id, left, right;
        cin >> node_id >> left >> right;
        SetData(Trees, node_id, left, right);
    }

    for (int i = 0; i < N; i++){
        GetDegree(Trees, i);

        if (Trees[i].parent == NIL) GetDepth(Trees, i, 0);
        if (Trees[i].left_child == NIL && Trees[i].right_child == NIL) GetHeight(Trees, i, 0);
    }

    for (int i = 0;  i< N; i++){
        cout << "node " << i << ": ";
        cout << "parent = ";
        ShowParent(Trees, i);
        cout << ", ";
        ShowSibling(Trees, i);
        cout << ", ";
        cout << "degree = " << Trees[i].degree;
        cout << ", ";
        cout << "depth = " << Trees[i].depth;
        cout << ", ";
        cout << "height = " << Trees[i].height;
        cout << ", ";
        ShowAttribute(Trees, i);
        cout << endl;
    }

    return 0;
}