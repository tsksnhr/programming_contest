// Stack
// ALDS1_3_D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX_SIZE = 1e5;

typedef struct my_stack{

    ll top;
    ll array[1000];

    my_stack(ll size){
        top = 0;
    }

    void push(ll num){
        top++;
        my_stack::array[top] = num;
    }

    ll pop(char op){

        ll ret = 0;

        if (op == '+') ret = array[top-1] + array[top];
        if (op == '-') ret = array[top-1] - array[top];
        if (op == '*') ret = array[top-1] * array[top];

        top -= 2;
        return ret;
    }

    void pring_num(){
//        cerr << top << endl;
        cout << array[top] << endl;
    }

} tiny_stack;

int main(){

    tiny_stack mystk(1000);

    char str[1000];
    fgets(str, 999, stdin);

    char num_str[7];
    int pos = 0;
    for (int i = 0; i < strlen(str); i++){
        char ch = str[i];

        if (ch == '+' || ch == '-' || ch == '*'){
            mystk.push(mystk.pop(ch));
            i++;
        }
        else if (ch != ' '){
            num_str[pos] = ch;
            pos++;
        }
        else{
            ll num = atoll(num_str);
            mystk.push(num);
            
            pos = 0;
            for (int i = 0; i < strlen(num_str); i++) num_str[i] = ' ';
        }
    }

    mystk.pring_num();

    return 0;
}