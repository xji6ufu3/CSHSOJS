#include<iostream>
using namespace std;
int main()
{
    string s;
    while(cin>>s and s!="0")
    {
        cout<<"Block "<<s<<" is encrypted as ";
        for(int q=0;q<4;q++)
        s[q]=(char)(((s[q]-'0')+5)%7+'0');
        swap(s[0],s[2]);
        swap(s[1],s[3]);
        cout<<s<<".\n";
    }
 } 
 
/**************************************************************
1001: �[�K���D
�ɶ�����: 1 Sec  �O���魭��: 128 MB

�D�شy�z
�����q�T���q�}�o�@�ڷs������XTarco Pager�C�����`���������ͬ��F�q�T���w���ʡA�Q�X�F�@�دS���[�K�覡�C��[�K��k�O�N��Ƥ����\�h�϶��A�C�@�϶��Ҭ�4��ƪ��ƭȡA�䤤�C�@��Ƭҥ[�W5�A���H7�A�åѨ�l�ƨ��N�A�M��A�N�䤤�Ĥ@��ƻP�ĤT��ƥ洫�A�ĤG��ƻP�ĥ|��ƥ洫�A�̫�A�i��ǿ�C�ЦU��{�]���⼶�g�@�{���A�i���4��Ƹ�ƪ��ഫ�C

��J
�C�@��N��@�����[�K����ơC�Y�O��@���0�A��ܸ�Ƶ����C

��X
�бN�[�K�᪺�ƭȥH�U�C��X�d�Ү榡��X�C

��J�d��
1582
3596
5575
0
��X�d��
Block 1582 is encrypted as 6063.
Block 3596 is encrypted as 0413.
Block 5575 is encrypted as 5333.
****************************************************************/

/**************************************************************
    Problem: 1001
    User: max2124
    Language: C++
    Result: Accepted
    Time:8 ms
    Memory:1536 kb
****************************************************************/
