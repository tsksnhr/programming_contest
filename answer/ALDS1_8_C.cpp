// Binary Search Tree 3

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

typedef struct TreeNode{

    ll key;

    TreeNode *parent, *left, *right;

} Node;

Node *NIL, *root;

void tiny_insert(ll key){

    Node *x, *y, *z;
    x = root;
    y = NIL;
    z = (Node *)malloc(sizeof(Node));
    z->key = key;
    z->parent = NIL;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL){
        y = x;
        if (key < x->key) x = x->left;
        else x = x->right;
    }
    z->parent = y;

    if (y == NIL) root = z;
    else if (key < y->key) y->left = z;
    else y->right = z;

    return;
}

void tiny_find(ll key){

    bool ret = false;
    Node *x = root;

    while (x != NIL){
        if (x->key == key){
            ret = true;
            break;
        }
        else if (key < x->key) x = x->left;
        else x = x->right;
    }

    if (ret) cout << "yes" << endl;
    else cout << "no" << endl;

    return;
}

void changeconnect(Node *x, Node *after){

//  must be prevented null-access
    if (x->parent->left != NIL && x->parent->left->key == x->key){
        x->parent->left = after;
    }
    else{
        x->parent->right = after;
    }

    return;
}

void inorder_walk(Node *original, Node *one, bool &flg, Node **remove){

    if (one->left != NIL) inorder_walk(original, one->left, flg, remove);

    if (flg){    
        ll buf = one->key;
        one->key = original->key;
        original->key = buf; 
        *remove = one;
        flg = false;
    }

    return;
}

void tiny_delete(ll key){

    Node *x;
    x = root;

    while (x != NIL){
        // cerr << key << " " << x->key << endl;
        if (x->key == key){
            Node *y;
            y = x;

            // cerr << "x->left = " << x->left << endl;
            // cerr << "x->right = " << x->right << endl;
            if ((x->right != NIL) && (x->left != NIL)){
                // cerr << "called" << endl;
                bool flg = true;
                inorder_walk(x, x->right, flg, &y);
            }
            // else{
                // cerr << "if condition is " << ((x->right != NIL) && (x->right != NIL)) << endl;
                // cerr << "not called" << endl;
            // }

            if (y->left != NIL){
                // cerr << "a" << endl;
                y->left->parent = y->parent;
                changeconnect(y, y->left);
            }
            else if (y->right != NIL){
                // cerr << "b" << endl;
                y->right->parent = y->parent;
                changeconnect(y, y->right);
            }
            else{
                // cerr << "c" << endl;
                changeconnect(y, NIL);
            }
            break;
        }
        else if (key < x->key) x = x->left;
        else x = x->right;
    }

    return;
}

void preorder(Node *one){

    cout << " " << one->key;
    if (one->left != NIL){
        preorder(one->left);
    }
    if (one->right != NIL){
        preorder(one->right);
    }

    return;
}

void inorder(Node *one){

    if (one->left != NIL) inorder(one->left);
    cout << " " << one->key;
    if (one->right != NIL) inorder(one->right);

    return;   
}

void tiny_print(){

    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;

    return;
}

int main(){

    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        string str;
        cin >> str;
        // cerr << i << " " << str << endl;

        if (str == "insert"){
            ll key;
            cin >> key;
            tiny_insert(key);
        }
        else if (str == "find"){
            ll key;
            cin >> key;
            tiny_find(key);
        }
        else if (str == "delete"){
            ll key;
            cin >> key;
            tiny_delete(key);
        }
        else{
            tiny_print();
        }
    }

    return 0;
}