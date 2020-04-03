#include <bits/stdc++.h>
using namespace std;

void mul_chk(int num, vector<vector<int>> &mul_table, int &correct_num, int &wrong_num);

int main(){

    vector<vector<int>> mul_table(9, vector<int> (9));
    int i, j, correct_num, wrong_num;
    int &c_num = correct_num;
    int &w_num = wrong_num;

    correct_num = 0;
    wrong_num = 0; 

    for (i=0; i<9; i++){
        for (j=0; j<9; j++){
            cin >> mul_table.at(i).at(j);
        }
    }

    mul_chk(9, mul_table, c_num, w_num);

    for (i=0; i<9; i++){
        for (j=0; j<9; j++){
            cout << mul_table.at(i).at(j);
            if (j == 8){
                break;
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }
    cout << correct_num <<endl;
    cout << wrong_num << endl;

    return 0;
}

void mul_chk(int num, vector<vector<int>> &mul_table, int &correct_num, int &wrong_num){

    int i, j, ans;

    for (i=0; i<num; i++){
        for (j=0; j<num; j++){
            ans = (i+1)*(j+1);

            if (ans != mul_table.at(i).at(j)){
                mul_table.at(i).at(j) = ans;
                wrong_num++;
            }
            else{
                correct_num++;
                continue;
            }
        }
    }
}