#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N, Y;
    int a, b, c, num, sum;
    int flg;

    // flgを初期化しないことで変な挙動になった・・・初期化大事
    flg = 0;
    a = 0;
    b = 0;
    c = 0;
    num = 0;
    sum = 0;

    cin >> N >> Y;

    for (a=0; a<N+1; a++){
        for (b=0; (a+b)<N+1; b++){              // a+b<=9を満たしながら探索しないと、cが負値となることでNの拘束条件を満たしてしまうケースがある(a=12, b=17, N=20 の時 c=-9)
            c = N - (a + b);                    // aとbが決まればcが一意に決まるため、cでループさせる必要なし
            num = a + b + c;
            sum = 10000*a + 5000*b + 1000*c;

            if ((num == N) && (sum == Y)){
                flg = 1;
                break;
            }
        }
        if (flg == 1){
            break;
        }
    }

    if (flg == 1){
      	cout << a << ' ' << b << ' ' << c << endl;
    }
  	else{
    	cout << -1 << ' ' << -1 << ' ' << -1 << endl;
    }

    return 0;
}
