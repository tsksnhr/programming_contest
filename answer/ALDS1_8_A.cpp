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

void Insert(ll key){

    Node *x;
    Node *y;
    Node *z;
//    cerr << x << " " << y << " " << z << endl;

    x = root;
    y = NIL;
    z = (Node *)malloc(sizeof(Node));
    z->key = key;
    z->left = NIL;
    z->right = NIL;
    z->parent = NIL;
//    cerr << x << " " << y << " " << z << endl;

    while (x != NIL){
        y = x;
        if (key > x->key) x = x->right;
        else x = x->left;
    }
    z->parent = y;

    if (y == NIL) root = z;
    else if (key > y->key) y->right = z;
    else y->left = z;

    return;
}

void PreOrder(Node *node){
    
    cout << " " << node->key;
//    cerr << "pre" << endl;
    
    if (node->left != NIL) PreOrder(node->left);
    if (node->right != NIL) PreOrder(node->right);
    
    return;
}

void InOrder(Node *node){
    
    if (node->left != NIL) InOrder(node->left);
    cout << " " << node->key;
//    cerr << "in" << endl;

    if (node->right != NIL) InOrder(node->right);
    
    return;
}

int main(){

//    Initialize();

    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
//        cerr << i << endl;
        string command;
        ll key;
        cin >> command;

        if (command == "insert"){
            cin >> key;
//            cerr << "inserted" << endl;
            Insert(key);
        }
        else{
            InOrder(root);
            cout << endl;
            PreOrder(root);
            cout << endl;
        }
    }

    return 0;
}