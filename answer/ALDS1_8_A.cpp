// Binary Search Tree 1

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//const ll NIL = 1LL << 60;

typedef struct NodeData{

    ll key;

    NodeData *parent;
    NodeData *left;
    NodeData *right;

} Node;

Node *root, *NIL;

void Insert(Node *tree, ll key){

    Node *x;
    Node *y;
    Node *z;

    x = root;
    y = NIL;
    z = (Node *)malloc(sizeof(Node));
    z->key = key;
    z->left = NIL;
    z->right = NIL;
    z->parent = NIL;

    while (x != NIL){
        y = x;
        if (key > x->key) x = x->right;
        else x = x->left;
    }
    x->key = key;

}

int main(){

}