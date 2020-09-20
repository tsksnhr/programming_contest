#include<bits/stdc++.h>
using namespace std;
const int INF = 100005;

template<typename T>
struct Tiny_queue{

    int head, tail;
    T my_queue[INF];

    Tiny_queue(){
        head = 0;
        tail = 0;
    }

    bool isEMPTY(){
        return head == tail;
    }
    bool isFULL(){
        return head == (tail+1)%INF;
    }

    void push(T a){
        if(isFULL()){
            cout << "error"s << endl;
            return;
        }
        else{
            my_queue[tail] = a;
            if(tail+1 == INF){
                tail = 0;
            }
            else{
                ++tail;
            }
        }
    }

    T pop(){
        if(isEMPTY()){
            cout << "error"s << endl;
            return my_queue[head];
        }
        else{
            T buf = my_queue[head];
            if(head+1 == INF){
                head = 0;
            }
            else{
                ++head;
            }
            return buf;
        }
    }
};

int main(){

    Tiny_queue<pair<string, int>> myque;

    int n;
    int q;
    cin >> n >> q;
    for(int i = 0; i < n; ++i){
        pair<string, int> tmp;
        cin >> tmp.first >> tmp.second;
        myque.push(tmp);
    }

    Tiny_queue<pair<string, int>> ans;
    int cnt{};

    while(!myque.isEMPTY()){
        pair<string, int> buf;
        buf = myque.pop();

        int buf_second{};
        buf_second = buf.second-q;
        if(buf_second > 0){
            buf.second = buf_second;
            cnt += q;
            myque.push(buf);
        }
        else{
            cnt += buf.second;
            buf.second = cnt;
            ans.push(buf);
        }
    }

    while(!ans.isEMPTY()){
        pair<string, int> _ans;
        _ans = ans.pop();
        cout << _ans.first << " "s << _ans.second << endl; 
    }
    return 0;
}
