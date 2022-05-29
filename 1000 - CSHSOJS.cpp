#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,s;
    while(scanf("%d%d",&a,&s)==2)
    printf("%d\n",a+s);
}

/**************************************************************
1000: A + B
時間限制: 1 Sec  記憶體限制: 128 MB

題目描述
計算 A + B 的結果

輸入
兩個整數A和B，其中0?A, B?1000。

輸出
輸出A與B的和。

輸入範例
1 2
輸出範例
3
提示
問：怎樣輸入輸出？

答：你的程式應該從標準輸入(stdin)中讀取資料，而將結果寫到標準輸出(stdout)。比如，在C語言中你可以使用“scanf”，在C++語言中則可以使用“cin”來輸入；輸出可以使用C語言的“printf”或者C++語言的“cout”。其他的語言可以參照下面的程式。


注意：不要向標準輸出寫入題目要求輸出結果之外的其他資料，否則你會被判為“Wrong Answer”，即錯誤的運行結果。


你的程式也不能試圖讀或寫任何檔，否則你可能被判為“Runtime Error”(運行時錯誤)或“Wrong Answer”(錯誤結果)。


下面是這道題的一個C++或者G++的程式。

#include <iostream>

using namespace std;

int main()

{

    int a,b;

    while(cin >> a >> b)

        cout << a+b << endl;

    return 0;

}


注意：對於GCC或者G++，main()函數的返回值必須是int型，否則可能導致“Compile Error”即編譯錯誤。


下面是這道題的一個C或者GCC的程式。

#include <stdio.h>


int main()

{

    int a,b;

    while(scanf("%d %d",&a, &b)==2)

        printf("%d\n",a+b);

    return 0;

}

來源
POJ
****************************************************************/

/**************************************************************
    Problem: 1000
    User: max2124
    Language: C
    Result: Accepted
    Time:0 ms
    Memory:956 kb
****************************************************************/
