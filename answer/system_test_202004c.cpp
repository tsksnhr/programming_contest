#include <bits/stdc++.h>
using namespace std;

void dfs(int a, int b, int c, int num);

int A, B, C;
int sum;
int ans ;

int main(void){

    int temp;

    cin >> A >> B >> C;
//    ans = 0;

    sum = A + B + C;

    dfs(0, 0, 0, sum);

    cout << ans << endl;

    return 0;
}

// atcoderのコードテストあとint型の関数では終了コード139になる、なぜ？
void dfs(int a, int b, int c, int num){

    if ((a > A) || (b > B) || (c > C)){
        return;
    }
    if (!((a >= b) && (b >= c))){
        return;
    }
    if (num == 0){
        ans++;
        return;
    }

    dfs(a + 1, b, c, num - 1);
    dfs(a, b + 1, c, num - 1);
    dfs(a, b, c + 1, num - 1);
}