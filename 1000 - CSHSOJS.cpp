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
�ɶ�����: 1 Sec  �O���魭��: 128 MB

�D�شy�z
�p�� A + B �����G

��J
��Ӿ��A�MB�A�䤤0?A, B?1000�C

��X
��XA�PB���M�C

��J�d��
1 2
��X�d��
3
����
�ݡG��˿�J��X�H

���G�A���{�����ӱq�зǿ�J(stdin)��Ū����ơA�ӱN���G�g��зǿ�X(stdout)�C��p�A�bC�y�����A�i�H�ϥΡ�scanf���A�bC++�y�����h�i�H�ϥΡ�cin���ӿ�J�F��X�i�H�ϥ�C�y������printf���Ϊ�C++�y������cout���C��L���y���i�H�ѷӤU�����{���C


�`�N�G���n�V�зǿ�X�g�J�D�حn�D��X���G���~����L��ơA�_�h�A�|�Q�P����Wrong Answer���A�Y���~���B�浲�G�C


�A���{���]����չ�Ū�μg�����ɡA�_�h�A�i��Q�P����Runtime Error��(�B��ɿ��~)�Ρ�Wrong Answer��(���~���G)�C


�U���O�o�D�D���@��C++�Ϊ�G++���{���C

#include <iostream>

using namespace std;

int main()

{

    int a,b;

    while(cin >> a >> b)

        cout << a+b << endl;

    return 0;

}


�`�N�G���GCC�Ϊ�G++�Amain()��ƪ���^�ȥ����Oint���A�_�h�i��ɭP��Compile Error���Y�sĶ���~�C


�U���O�o�D�D���@��C�Ϊ�GCC���{���C

#include <stdio.h>


int main()

{

    int a,b;

    while(scanf("%d %d",&a, &b)==2)

        printf("%d\n",a+b);

    return 0;

}

�ӷ�
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
