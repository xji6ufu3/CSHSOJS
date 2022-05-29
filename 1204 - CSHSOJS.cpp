#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int a,d;
    string s;
    while(cin>>a and a)
    v.push_back(a);
    cin>>a;
    while(a--)
    {
        cin>>s;
        if(s=="Add")
        {
            cin>>d;
            v.push_back(d);     
        }
        else if (s=="Del")
        {
            if(v.empty())
            {
                cout<<"Error\n";
                continue;
            }
            v.pop_back();
        }
        else if (s=="Qry")
        {
            if(v.empty())
            {
                cout<<"Empty\n";
                continue;
            }
            for(int q=0;q<v.size()-1;q++)
            cout<<v[q]<<" ";
            cout<<v[v.size()-1]<<'\n';
        }
        else if (s=="Clear")
        v.clear();
    } 
}

/**************************************************************
1204: vector的基本操作練習
時間限制: 1 Sec  記憶體限制: 128 MB

題目描述
給定一數列的內容(輸入時，以0代表數列的結束)，接著要請你執行下列四種操作：
1. Add XX：將數字XX放進去數列尾端
2. Del：將數列的最後一個數字刪除
3. Qry：列印出此數列的所有元素
4. Clear：將整個數列內容清空
若操作為Del，且此數列目前為空的，請輸出"Error"，不含引號
若操作為Qry，且此數列目前為空的，請輸出"Empty"，不含引號

例如：
底下的輸入範例，一開始的序列為
5 2 7 8 5
第一個操作 : 將2加入序列的尾端
5 2 7 8 5 2
第二個操作 : 印出整個序列
第三個操作 : 刪掉最後一個數字
5 2 7 8 5
第四個操作 : 刪掉最後一個數字
5 2 7 8
第五個操作 : 印出整個序列
第六個操作 : 清除整個序列
所以變成空的
第七個操作﹔刪掉最後一個數字
但目前序列是空的，因此輸出Error
第八個操作﹔印出整個序列
但目前序列是空的，因此輸出Empty

輸入
第一行有若干個正整數，為一開始的數列，最後一個數字保證為0，表示0的前一個正整數為數列的結尾
第二行有一正整數 Q，表示有Q筆操作 (Q<=1000)
接下會有Q筆操作

輸出
依題目的說明完成所有操作

輸入範例
5 2 7 8 5 0
8
Add 2
Qry
Del
Del
Qry
Clear
Del
Qry

輸出範例
5 2 7 8 5 2
5 2 7 8
Error
Empty

來源
detamega
****************************************************************/

/**************************************************************
    Problem: 1204
    User: max2124
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1540 kb
****************************************************************/
