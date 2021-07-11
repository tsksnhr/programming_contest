// Binary Search Tree 2

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef struct TreeNode{

    ll key;

    TreeNode *parent;
    TreeNode *left;
    TreeNode *right;

}Node;

Node *NIL, *root;

void insert(ll key){

    Node *x;
    Node *y;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = key;
    z->parent = NIL;
    z->left = NIL;
    z->right = NIL;

    x = root;
    y = NIL;

    while (x != NIL){
        y = x;
        if (x->key < key) x = x->right;
        else x = x->left;
    }
    z->parent = y;

    if (y == NIL) root = z;
    else if (y->key < key) y->right = z;
    else y->left = z;

    return;
}

bool search(ll key){

    bool is_exist = false;

    Node *x;
    x = root;

    while (x != NIL){
        if (x->key == key){
            is_exist = true;
            break;
        }
        else if (x->key < key) x = x->right;
        else x = x->left;
    }

    return is_exist;
}

void preorder(Node *one){

    cout << " " << one->key;
    if (one->left != NIL) preorder(one->left);
    if (one->right != NIL) preorder(one->right);

    return;
}

void inorder(Node *one){

    if (one->left != NIL) inorder(one->left);
    cout << " " << one->key;
    if (one->right != NIL) inorder(one->right);

    return;   
}

int main(){

    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        string command;
        cin >> command;

        if (command == "insert"){
            ll key;
            cin >> key;
            insert(key);
        }
        else if (command == "find"){
            ll key;
            bool is_exist;
            cin >> key;
            is_exist = search(key);

            if (is_exist) cout << "yes" << endl;
            else cout << "no" << endl;
        }
        else{
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;

        }
    }

    return 0;
}
