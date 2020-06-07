#include <bits/stdc++.h>
using namespace std;

void dfs(int a, int b, int c, int x, int sum);

int A, B, C, X;
int sum, ans;

int main(){

    cin >> A >> B >> C >> X;
    sum = 0;
    ans = 0;

    dfs(0, 0, 0, X, sum);

    cout << ans << endl;
    return 0;
}

void dfs(int a, int b, int c, int x, int sum){

    if (sum == x){
        ans++;
        return;
    }
    else if (a == A) return;
    else if (b == B) return;
    else if (c == C) return;
    else{
        dfs(a+1, b, c, x, sum+500);
        dfs(a, b+1, c, x, sum+100);
        dfs(a, b, c+1, x, sum+50);
    }
}