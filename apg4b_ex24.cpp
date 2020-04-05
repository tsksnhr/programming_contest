#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する
struct Clock{

    int hour;
    int minute;
    int second;

    void set(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
    }

    string to_str(){

        string h, m, s;

        if (hour < 10){                     // 1桁だったら10の位の0を含めて表示
            h = "0" + to_string(hour);
        }
        else{
            h = to_string(hour);
        }
        if (minute < 10){                   // 1桁だったら10の位の0を含めて表示
            m = "0" + to_string(minute); 
        }
        else{
            m = to_string(minute);
        }
        if (second < 10){                   // 1桁だったら10の位の0を含めて表示
            s = "0" + to_string(second);
        }
        else{
            s = to_string(second);
        }

        return h + ":" + m + ":" + s;
    }

    void shift(int diff_second){
        
        int h;
        int m;
        int s;

        h = diff_second/3600;
        m = (diff_second - 3600*h)/60;
        s = (diff_second - 3600*h)%60;

        if (diff_second > 0){

            second += s;
            if (second >=60){   // 繰り上がりの対応
                m += 1;
                second -= 60;
            }

            minute += m;
            if (minute >= 60){  // 繰り上がりの対応
                h += 1;
                minute -= 60;
            }

            hour += h;
            if (hour >= 24){    // 繰り上がりの対応
                hour -= 24;
            }
        }
        else{

            second += s;
            if (second < 0){    // 繰り下がりの対応
                m -= 1;
                second += 60;
            }

            minute += m;
            if (minute < 0){    // 繰り下がりの対応
                h -= 1;
                minute += 60;
            }

            hour += h;
            if (hour < 0){      // 繰り下がりの対応
                hour += 24;
            }
        }
    }
};

// -------------------
// ここから先は変更しない
// -------------------

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
