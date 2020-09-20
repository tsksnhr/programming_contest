#include<bits/stdc++.h>
using namespace std;

struct Tiny_stack{

    int top;
    long long my_stack[105];

    Tiny_stack(){
        top = 0;
    }

    bool isFULL(){
        return top == 105-1;
    }
    bool isEMPTY(){
        return top == 0;
    }

    void push(int a){
        if(isFULL()){
            cout << "error"s << endl;
            return;
        }
        ++top;
        my_stack[top] = a;
    }

    long long pop(){
        if(isEMPTY()){
            cout << "error"s << endl;
            return 0;
        }
        --top;

        return my_stack[top+1];
    }

    int size_chk(){
        return top;
    }
};

void solver(){

}

int main(){

    Tiny_stack stk;

    while(true){
        string tmp;
        cin >> tmp;

        if(tmp == ""){
            break;
        }

        if(tmp == "+"){
            long long a, b;
            a = stk.pop();
            b = stk.pop();
            stk.push(a+b);
        }
        else if(tmp == "-"){
            long long a, b;
            b = stk.pop();
            a = stk.pop();
            stk.push(a-b);
        }
        else if(tmp == "*"){
            long long a, b;
            a = stk.pop();
            b = stk.pop();
            stk.push(a*b);
        }
        else{
            stk.push(stoi(tmp));
        }

        tmp = "";
    }

    cout << stk.pop() << endl;
    return 0;
}