#include <bits/stdc++.h>
using namespace std;

int64_t kurikaeshi_2jou(int64_t a, int64_t num);

int main(){

    int64_t H;
    cin >> H;

    int64_t num = 1;
    int64_t count = 0;

    while (H>1){
        H /= 2;
        count++;
        num *= 2;
    }

    int64_t sum = 0;
    for (int64_t i=0; i<count; i++){
        sum += kurikaeshi_2jou(2, i);
    }

    num = kurikaeshi_2jou(2, count);

    int64_t ans;
    ans = sum + num;

    cout << ans << endl;

    return 0;
}

int64_t kurikaeshi_2jou(int64_t a, int64_t num){

    if (num == 0){
        return 1;
    }
    if (num == 1){
        return a*kurikaeshi_2jou(a, num-1);
    }
    else if (num%2 != 0){
        return a*kurikaeshi_2jou(a, num-1);
    }
    else{
        return kurikaeshi_2jou(a, num/2)*kurikaeshi_2jou(a, num/2);
    }
}