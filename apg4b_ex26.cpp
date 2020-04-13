#include <bits/stdc++.h>
using namespace std;

//  関数プロトタイプ宣言
int int_f(void);
int print_int_f(void);
int vec_f(void);
int print_vec_f(void);


//  変数宣言
int order_num;
int order_count;
int ans_num;
int op_flg;

char order_temp;
char name;
char name_memo;
int num_buf;
char op_buf;

map<char, int> var_map;
map<char, vector<int>> vec_map;

vector<int> vec_buf;
vector<int> ans_vec;

string order;


int main(){

    cin >> order_num;

    for (order_count=0; order_count<order_num; order_count++){
        cin >> order;

        if (order == "int"){
            int_f();
        }
        else if (order == "print_int"){
            print_int_f();
        }
        else if (order == "vec"){
            vec_f();
        }
        else{
            print_vec_f();
            } 
        }
    
    return 0;
}

int int_f(void){

    op_flg = 0;
    num_buf = 0;
    ans_num = 0;
    order_temp = 0;
    name_memo = '0';

    int new_var_flg = 0;

    while(order_temp != ';'){
        cin >> order_temp;
        if (isdigit(order_temp)){
            order_temp -= 48;

            if (op_flg == 1) {
                num_buf = order_temp;   // 符号が出てからなら数値をbufに保存
            }
            else {
                ans_num = order_temp;   // 最初の数字なら最終的な値に保存
            }

            // 演算子によって処理を変更
           if (op_buf == '+'){
                ans_num += num_buf;
            }
            else if (op_buf == '-'){
                ans_num -= num_buf;
            }
        }
        else if ((order_temp <= 'z') && (order_temp >= 'a')){
            if (new_var_flg == 1){      //  nameが更新される前に==の判定を実施したい
                name_memo = name;
                new_var_flg = 0;
            }
            name = order_temp;
        }
        else if ((order_temp == '+') || (order_temp == '-')) {
            op_buf = order_temp;
            op_flg = 1;             // 符号保存を表すフラグ
        }
        else if (order_temp == '='){
            new_var_flg = 1;
        }
    }

    if (name_memo != '0') var_map[name_memo] = ans_num;        // 変数をmapに保存
//    else var_map[name] = ans_num;

    return 0;
}

int print_int_f(void){

    op_flg = 0;
    num_buf = 0;
    ans_num = 0;
    order_temp = 0;
    op_buf = 0;
    name_memo = '0';

    int new_var_flg = 0;

    while(order_temp != ';'){
        cin >> order_temp;
        if (isdigit(order_temp)){
            order_temp -= 48;

            if (op_flg == 1) {
                num_buf = order_temp;   // 符号が出てからなら数値をbufに保存
            }
            else {
                ans_num = order_temp;   // 最初の数字なら最終的な値に保存
            }

            // 演算子によって処理を変更
           if (op_buf == '+'){
                ans_num += num_buf;
            }
            else if (op_buf == '-'){
                ans_num -= num_buf;
            }
        }
        else if ((order_temp <= 'z') && (order_temp >= 'a')){
            if (new_var_flg == 1){
                name_memo = name;
                new_var_flg = 0;
            }
            name = order_temp;

            if (op_flg == 1) {
                num_buf = var_map[name];   // 演算子が出ていればバッファに保存

                // 演算子によって処理を変更
                if (op_buf == '+'){
                    ans_num += num_buf;
                }
                else if (op_buf == '-'){
                    ans_num -= num_buf;
                }
            }
            else {
                ans_num = var_map[name];               // 演算子が出ていなければ最終値に保存
            }
        }
        else if ((order_temp == '+') || (order_temp == '-')) {
            op_buf = order_temp;
            op_flg = 1;             // 符号保存を表すフラグ
        }
        else if (order_temp == '=') {
            new_var_flg = 1;
        }
    }

    if (name_memo != '0') {
        var_map[name_memo] = ans_num;        // 変数をmapに保存
        cout << var_map[name_memo] << endl;
    }
    else {
        cout << ans_num << endl;
    }
    return 0;
}

int vec_f(){

    op_flg = 0;
    num_buf = 0;
    order_temp = 0;
    op_buf = 0;
    name_memo = '0';

    int array_flg = 0;
    int array_count = 0;
    int new_var_flg = 0;

    for (int i=0; i<ans_vec.size(); i++){
        ans_vec.at(i) = 0;
    }

    while(order_temp != ';'){
        cin >> order_temp;
        if (isdigit(order_temp)){
            order_temp -= 48;           //  char型で受け取った整数をint型で計算できるよう変換('0'→0)
            if (op_flg == 0) {
                ans_vec.push_back(order_temp);
            }

            // 演算子によって処理を変更
            if (op_buf == '+'){
                ans_vec.at(array_count) += order_temp;  
            }
            else if (op_buf == '-'){
                ans_vec.at(array_count) -= order_temp;
            }
            array_count++;
        }
        else if ((order_temp <= 'z') && (order_temp >= 'a')) {
            if (new_var_flg == 1){
                name_memo = name;
                new_var_flg = 0;
            }
            name = order_temp;

            if (op_flg == 1) {
                if (array_flg == 1) {
                    order_temp = var_map[name];   //  配列の中で変数が呼ばれた際には配列の要素として追加
                }
                else  vec_buf = vec_map[name];                          //  配列の外で変数が呼ばれた際には配列として追加

                if (array_flg != 1) {   //  配列内でなければ計算を実施
                    for (int i=0; i<vec_buf.size(); i++){       // 配列の要素数だけループ

                        // 演算子によって処理を変更
                        if (op_buf == '+'){
                            ans_vec.at(i) += vec_buf.at(i);
                        }
                        else if (op_buf == '-'){
                            ans_vec.at(i) -= vec_buf.at(i);
                        }
                    }
                }
                else{
                    // 演算子によって処理を変更
                    if (op_buf == '+'){
                        ans_vec.at(array_count) += order_temp;
                    }
                    else if (op_buf == '-'){
                        ans_vec.at(array_count) -= order_temp;
                    }
                    array_count++;
                }                
            }
            else {
                if (array_flg == 1) ans_vec.push_back(var_map[name]);       // 配列の中であれば
                else ans_vec = vec_map[name];                               // 配列の外であれば
            }
        }
        else if ((order_temp == '+') || (order_temp == '-')) {
            op_buf = order_temp;
            op_flg = 1;             // 符号保存を表すフラグ
        }
        else if ((order_temp == '[')) {     //  配列の外か中かを表すフラグ
            array_flg = 1;
        }
        else if ((order_temp == ']')) {
            array_flg = 0;
            array_count = 0;
        }
        else if (order_temp == '='){
            new_var_flg = 1;
        }
    }

    if (name_memo != '0') vec_map[name_memo] = ans_vec;        // 変数をmapに保存
//    else vec_map[name] = ans_vec;

    return 0;
}

int print_vec_f(){

    op_flg = 0;
    num_buf = 0;
    order_temp = 0;
    op_buf = 0;
    name_memo = '0';;

    int array_flg = 0;
    int array_count = 0;
    int new_var_flg = 0;

    for (int i=0; i<ans_vec.size(); i++){
        ans_vec.at(i) = 0;
    }

    while(order_temp != ';'){
        cin >> order_temp;
        if (isdigit(order_temp)){
            order_temp -= 48;           //  char型で受け取った整数をint型で計算できるよう変換('0'→0)

            if (op_flg == 0) {
                ans_vec.push_back(order_temp);
            }

            if (op_flg == 1){
                // 演算子によって処理を変更
                if (op_buf == '+'){
                    ans_vec.at(array_count) += order_temp;              
                }
                else if (op_buf == '-'){
                    ans_vec.at(array_count) -= order_temp;
                }
                array_count++;
            }
        }
        else if ((order_temp <= 'z') && (order_temp >= 'a')){
            if (new_var_flg == 1){
                name_memo = name;
                new_var_flg = 0;
            }
            name = order_temp;

            if (op_flg == 1) {
                if (array_flg == 1) {
                    order_temp = var_map[name]; 
                }
                else  vec_buf = vec_map[name];                          //  配列の外で変数が呼ばれた際には配列として追加

                if (array_flg != 1) {   //  配列内でなければ計算を実施
                    for (int i=0; i<vec_buf.size(); i++){       // 配列の要素数だけループ

                        // 演算子によって処理を変更
                        if (op_buf == '+'){
                            ans_vec.at(i) += vec_buf.at(i);
                        }
                        else if (op_buf == '-'){
                            ans_vec.at(i) -= vec_buf.at(i);
                        }
                    }
                }
                else{
                    // 演算子によって処理を変更
                    if (op_buf == '+'){
                        ans_vec.at(array_count) += order_temp;
                    }
                    else if (op_buf == '-'){
                        ans_vec.at(array_count) -= order_temp;
                    }
                    array_count++;
                }                
            }
            else {
                if (array_flg == 1) ans_vec.push_back(var_map[name]);       // 配列の中であれば
                else {
                    ans_vec = vec_map[name];                               // 配列の外であれば
                }
            }
        }
        else if ((order_temp == '+') || (order_temp == '-')) {
            op_buf = order_temp;
            op_flg = 1;             // 符号保存を表すフラグ
        }
        else if ((order_temp == '[')) {     //  配列の外か中かを表すフラグ
            array_flg = 1;
        }
        else if ((order_temp == ']')) {
            array_flg = 0;
            array_count = 0;
        }
        else if (order_temp == '='){
            new_var_flg = 1;
        }
    }

    cout << "[ ";
    for(int x: ans_vec){
        cout << x << " ";
    }
    cout << "]" << endl;

    return 0;
}