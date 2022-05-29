#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        double z,x,c,s;
        if(a==2)
        {
            cin>>z>>x;
            cout<<fixed<<setprecision(3)<<sqrt(z*z+x*x)<<endl;
        }
        else
        {
            cin>>z>>x>>c;
            if(z+x>c and x+c>z and z+c>x)
            {
                s=(z+x+c)/2;
                cout<<fixed<<setprecision(3)<<sqrt(s*(s-z)*(s-x)*(s-c))<<endl;
            } 
            else
            cout<<"Not Triangle\n";
        }
    }
 } 
 
/**************************************************************
1037: 三角形面積？
時間限制: 1 Sec  記憶體限制: 128 MB

題目描述
試設計一程式，其功能如下：

1.若給予 3 個數值 a, b, c，計算該三角形面積。
2.若給予 2 個數值 a, b，則以 a, b 為直角三角形兩股，計算斜邊長。

輸入
有多筆測試資料，每筆測試資料有兩行，若第一行等於 3 ，則下一行有 3 個整數，代表三角形三邊長a, b, c；若第一行等於 2 ，則下一行有 2 個整數，代表直角三角形的兩股長。
輸出
(1)每筆資料有 3 個整數a, b, c，若a, b, c無法構成三角形，請輸出「Not Triangle」；否則的話，請輸出三角形面積。

(2)每筆資料有 2 個整數a, b，請輸出斜邊長。三角形面積或斜邊長，請精確計算到小數點以下三位。

輸入範例
2
61 46
3
107 71 190
3
170 112 165
輸出範例
76.400
Not Triangle
8831.430
****************************************************************/

/**************************************************************
    Problem: 1037
    User: max2124
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1552 kb
****************************************************************/

