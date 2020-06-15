#include <bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cin >> num;

    int i, j, temp, index, k;
    vector<int> array(num);

    cout << "--- input array ---" << endl;
    for (i=0; i<num; i++){
        array.at(i) = num-1-i;
        cout << array.at(i) << " ";
    }
    cout << endl;

    int step = (num)/2;
    for (k=step; k>0; k/=2){        //  ステップ数でループ
        //  debug
        cout << "step = " << k << endl;

        for (i=k; i<num; i++){
            temp = array.at(i);         //  ソート対象の数値を記録
            index = i;                  //  ソート対象の初期位置を記録

            for (int j=i-k; j>=0; j-=k){
                if (temp < array.at(j)){            //  ソート対象が(j-1)番目の数値よりも小さい場合
                    array.at(j+k) = array.at(j);    //  (j-1)番目の数値をj番目にずらす
                    index = j;                      //  挿入されるべき位置を保存
                }
            }
            array.at(index) = temp;                 //  ソート対象を指定位置に挿入
        }
    }

    cout << "--- sorted array ---" << endl;
    for (i=0; i<num; i++){
        cout << array.at(i) << " ";
    }
    cout << endl;

    return 0;
}