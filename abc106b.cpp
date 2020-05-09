//  素因数分解ではなく、与えられた数字を1から除算して、余りが0になる値をカウントすれば同じことできる(こっちのが簡単)

#include <bits/stdc++.h>
using namespace std;

void prime_div(int num);

int N;
vector<int> used(250);

int main(){

    cin >> N;

    int i, j, sum, cnt = 0;
    for (i=1; i<=N; i += 2){
        sum = 1;
        for (int &x: used){     //  範囲for文による要素の初期化は参照を渡す必要がある
            x = 0;
        }

        prime_div(i);
//        cout << "i = " << i << endl;
/*
        for (int x: used){
            cout << x << " ";
        }
        cout << endl;
*/
        for (j=0; j<201; j++){
            if (used.at(j) != 0){
//                cout << "used.at(" << j << ") = " << used.at(j) << endl;
                sum *= (used.at(j) + 1);
            }
        }
//        cout << "sum = " << sum << endl; 
        if (sum == 8){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}

void prime_div(int num){

    int div;
    for (div=2; div<=num; div++){
        while ((num%div==0) && (num != 0)){
            num /= div;
            used.at(div)++;
//            cout << "num = " << num << " div = " << div << endl;
        }
    }
}