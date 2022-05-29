#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string str;
    while(getline(cin,str)){
        int data[500], point = 0, a, Max = 0;
        stringstream ss(str);
        while(ss>>a){
            data[point] = a;
            ++point;
        }
        sort(data,data+point);
        for(int q=0;q<point-1;q++){
            if((data[q+1] - data[q]) > Max){
                Max = data[q+1] - data[q];
            }
        }
        cout<<Max<<'\n';
    }
    return 0;
}

/**************************************************************
1003: Particular King
時間限制: 1 Sec  記憶體限制: 128 MB

題目描述
漢克是一個個性怪異的國王。有一天，他想在通往友邦的道路左邊種樹，以便出訪的時候可以遮蔭。於是，叫人買了許多樹苗，並且在每一棵樹上都刻寫一個數值，表示這棵樹要種植的位置。可是奇怪的漢克國王，出了一個另類的問題，命令種樹的工人必須找出相鄰兩棵樹的最大距離是多少，以便在這段距離找人幫忙遮蔭。

輸入
每筆測試資料一行有 n 個數值以空白隔開，每一個數值表示一棵樹的種植位置。其中 n <=500，每棵樹刻寫種植位置的數值最大為10000，任兩棵樹苗的種植位置可能相同。

輸出
每筆測試資料請輸出一行，即相鄰兩棵樹的最大距離。

輸入範例
25 66 1 35 8
123 45 99 6 21 12 8

輸出範例
31
54

提示
 sort
****************************************************************/

/**************************************************************
    Problem: 1003
    User: max2124
    Language: C++
    Result: Accepted
    Time:20 ms
    Memory:1560 kb
****************************************************************/
