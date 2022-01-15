#include<bits/stdc++.h>
using namespace std;

//  自作の双方向連結リスト
//template <typename T>
struct Tiny_doubly_linked_list{

    int key;
    Tiny_doubly_linked_list *prev, *next, *nil;

    //  コンストラクタ
    /*
    Tiny_doubly_linked_list(){
        nil = (Tiny_doubly_linked_list *)malloc(sizeof(Tiny_doubly_linked_list));
        nil->prev = nil;
        nil->next = nil;
    }
    */

    //  コンストラクタ
    void init(){
        nil = (Tiny_doubly_linked_list *)malloc(sizeof(Tiny_doubly_linked_list));
        nil->prev = nil;
        nil->next = nil;
    }

    //  挿入
    void insertlist(int key){
        Tiny_doubly_linked_list *buf;
        buf = (Tiny_doubly_linked_list *)malloc(sizeof(Tiny_doubly_linked_list));
        
        //  アロー演算子で構造体メンバのT型の変数keyにアクセス
        buf->key = key;

        //  アロー演算子で構造体メンバのポインタ型の変数にアクセスしている
        buf->next = nil->next;
        nil->next->prev = buf;
        nil->next = buf;
        buf->prev = nil;

        return;
    }

    //  関数の戻り値にポインタを返す場合、変数名を除いたポインタ変数宣言の形になる
    Tiny_doubly_linked_list* listsearch(int key){
        Tiny_doubly_linked_list *current;
        current = nil->next;

        while(current != nil && current->key != key){
            current = current->next;
        }

        return current;
    }

    // delete系の部品としてlistのつながりを切る関数を作成
    void deletelist(Tiny_doubly_linked_list *del_list){
        if(del_list == nil){
            return;
        }
        del_list->next->prev = del_list->prev;
        del_list->prev->next = del_list->next;
        free(del_list);
        return;
    }

    void deletelist_key(int key){
        Tiny_doubly_linked_list *buf;
        buf = listsearch(key);

        if(buf->key == key){
            deletelist(buf);
        }

        return;
    }

    void deletelist_head(){
        deletelist(nil->next);
    }

    void deletelist_tail(){
        deletelist(nil->prev);
    }

    void printlist(){
        Tiny_doubly_linked_list *cur = nil->next;

        int cnt{};
        while(true){
            if(cur == nil){
                break;
            }
            if(cnt != 0){
//                cout << " "s;
                printf(" ");
            }
//            cout << cur->key;
            printf("%d", cur->key);
            cnt++;
            cur = cur->next;
        }
        cout << "\n";
        return;
    }
};

int main(){

    Tiny_doubly_linked_list mylist;
    Tiny_doubly_linked_list *mylistp;

    mylistp = &mylist;
    mylistp->init();

    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        // iostreamを使うと遅いがc++でないとstring型は使用できない
        char order[20];
        int key{};
        scanf("%s", order);

        if(order[0] == 'i'){
//            cin >> key;
            scanf("%d", &key);
            mylistp->insertlist(key);
        }
        else if(order[6] == 'F'){
            mylistp->deletelist_head();
        }
        else if(order[6] == 'L'){
            mylistp->deletelist_tail();
        }
        else if(order[0] == 'd'){
//            cin >> key;
            scanf("%d", &key);
            mylistp->deletelist_key(key);
        }
        else{
            continue;
        }
    }

    mylistp->printlist();

    return 0;
}
