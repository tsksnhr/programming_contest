// Double Linked List
// ALDS1_3_C

#include <bits/stdc++.h>
using namespace std;

typedef struct tiny_doubly_linked_list
{
    int key;
    tiny_doubly_linked_list *prev;
    tiny_doubly_linked_list *next;

}Node;

Node *nil;

void Initialize(){
    nil = (Node *)malloc(sizeof(Node));
    nil->prev = nil;
    nil->next = nil;

    return;
}

void Insert(int num){
    Node *new_node;
    new_node = (Node *)malloc(sizeof(Node));
    new_node->key = num;
    
    nil->next->prev = new_node;
    new_node->next = nil->next; 
    nil->next = new_node;
    new_node->prev = nil;

    return;
}

Node* Search(int num){

    Node *cur = nil->next;
    while (cur != nil && cur->key != num) cur = cur->next;

    return cur;
}

void DeleteNode(Node *tag){

    if (tag == nil) return;

    tag->prev->next = tag->next;
    tag->next->prev = tag->prev;
    free(tag);
    
    return;
}

void DeleteFirst(){
    DeleteNode(nil->next);
    return;
}

void DeleteLast(){
    DeleteNode(nil->prev);
    return;
}

void DeleteKey(int num){
    Node *tag = Search(num);
    DeleteNode(tag);

    return;
}

void OutputKey(){

    Node *cur = nil->next;
    while (cur != nil){
        printf("%d", cur->key);
        cur = cur->next;
        if (cur != nil) printf(" ");
        else printf("\n");
    }

    return;
}

int main(){

    int N;
    cin >> N;
    Initialize();

    char insert[32] = "insert\0";
    char delete_[32] = "delete\0";
    char deleteFirst[32] = "deleteFirst\0";
    char deleteLast[32] = "deleteLast\0";

    for (int i = 0; i < N; i++){
        char command[32];
        int key;
        scanf("%s %d", command, &key);
        command[strlen(command)] = '\0';
//        char ch = getchar();

        if (strncmp(command, insert, 32) == 0) Insert(key);
        else if (strncmp(command, delete_, 32) == 0) DeleteKey(key);
        else if (strncmp(command, deleteFirst, 32) == 0) DeleteFirst();
        else if (strncmp(command, deleteLast, 32) == 0) DeleteLast();
        else cerr << "Something is wrong." << endl;
    }

    OutputKey();

    return 0;
}