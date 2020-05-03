#include <bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cin >> num;

    vector<int> array(num);

    for (int i=0; i<num; i++){
        array.at(i) = num-1-i;
    }

    int size = array.size();
    int temp;
    int index;

    cout << "--- input array ---" << endl;
    for (int i=0; i<size; i++){
        cout << array.at(i) << " ";
    }
    cout << endl;

    for (int i=1; i<size; i++){
        temp = array.at(i);         //  ソート対象の数値を記録
        index = i;                  //  ソート対象の初期位置を記録

        for (int j=i-1; j>=0; j--){
            if (temp < array.at(j)){            //  ソート対象が(j-1)番目の数値よりも小さい場合
                array.at(j+1) = array.at(j);    //  (j-1)番目の数値をj番目にずらす
                index = j;                      //  挿入されるべき位置を保存
            }
        }
        array.at(index) = temp;                 //  ソート対象を指定位置に挿入
    }

    cout << "--- sorted array ---" << endl;
    for (int i=0; i<size; i++){
        cout << array.at(i) << " ";
    }
    cout << endl;
}