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
1037: �T���έ��n�H
�ɶ�����: 1 Sec  �O���魭��: 128 MB

�D�شy�z
�ճ]�p�@�{���A��\��p�U�G

1.�Y���� 3 �Ӽƭ� a, b, c�A�p��ӤT���έ��n�C
2.�Y���� 2 �Ӽƭ� a, b�A�h�H a, b �������T���Ψ�ѡA�p�������C

��J
���h�����ո�ơA�C�����ո�Ʀ����A�Y�Ĥ@�浥�� 3 �A�h�U�@�榳 3 �Ӿ�ơA�N��T���ΤT���a, b, c�F�Y�Ĥ@�浥�� 2 �A�h�U�@�榳 2 �Ӿ�ơA�N�����T���Ϊ���Ѫ��C
��X
(1)�C����Ʀ� 3 �Ӿ��a, b, c�A�Ya, b, c�L�k�c���T���ΡA�п�X�uNot Triangle�v�F�_�h���ܡA�п�X�T���έ��n�C

(2)�C����Ʀ� 2 �Ӿ��a, b�A�п�X������C�T���έ��n�α�����A�к�T�p���p���I�H�U�T��C

��J�d��
2
61 46
3
107 71 190
3
170 112 165
��X�d��
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

