// Queue
// ALDS1_3_B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX_SIZE = 1e6+5;

template <typename NT>
class MyQueue{

    public:
        int head = 0, tail = 0;
        NT myqueue[MAX_SIZE];

    bool isempty(){
        if (head == tail) return true;
        else return false;
    }

    bool isfull(){
        int tail_mod = (tail + 1)%MAX_SIZE;
        
        if (head == tail_mod) return true;
        else return false;
    }

    void push(NT num){
        if (isfull()){
            cout << "Queue is full." << endl;
            return;
        }

        myqueue[tail] = num;
        tail++;
    }

    NT pop(){
//        if (isempty()) return;
        
        NT ret = myqueue[head];
        head++;
        
        return ret;
    }

};

int main(){

    MyQueue<string> myq_process;
    MyQueue<int> myq_time;

    int N, Q;
    cin >> N >> Q;
    vector<string> prosesses(N);
    vector<int> req_time(N);
    for (int i = 0; i < N; i++){
        //char ch = getchar();
        string str;
        cin >> str >> req_time.at(i);
        prosesses.at(i) = str;

        myq_process.push(prosesses.at(i));
        myq_time.push(req_time.at(i));
    }
    /*
    for (auto x: req_time) cerr << x << " ";
    cerr << endl; 
    cerr << myq_time.tail << endl;
    */

    int total_time = 0;
    while (!myq_time.isempty()){
        string pos = myq_process.pop();
        int value = myq_time.pop();
        
        value -= Q;
        if (value > 0){
            total_time += Q;
            myq_process.push(pos);
            myq_time.push(value);
        }
        else{
            total_time += (value + Q);
            cout << pos << " " << total_time << endl;
        }
    }

    return 0;
}