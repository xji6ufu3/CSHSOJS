#include<iostream>
#include<sstream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string str;
    while(getline(cin,str) && str!="~"){
        stringstream ss(str);
        string newstr="",count;
        int ans=0,time=1;
        char c;
        while(ss>>str and str!="#"){
            ss>>count;
            if(str.size()==1) c='1';
            else c='0';
            for(int q=0;q<count.size()-2;q++) newstr+=c;
        }
        bool b[newstr.size()];
        for(int q=newstr.size()-1;q>=0;q--){
            ans+=((int)newstr[q]-'0') * time;
            time*=2;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
/**************************************************************
1002: The Base-1 Number System
�ɶ�����: 1 Sec  �O���魭��: 128 MB

�D�شy�z
�ڭ̳����D n �i�쪺�Ʀr�t�ΡA�ϥ� n �ӲŸ��Ӫ�ܼƭȡC�Ҧp�ڭ̳̱`�ϥΪ�10�i��t�ΡA�Y�ϥ�0~9�o10�Ÿ��Ӫ�ܼƭȡC�]���A�@�i�쪺�Ʀr�t�ΡA�u��� '0' �o�ӲŸ��Ӫ�ܡC�H�U�O�@�i��Ʀr�t�Ϊ���ܤ�k�A�C�Ӽƭ�(�H�@����)�]�t�\�h�Ѫťչj�}�� '0' ���϶��A�C�Ӱ϶��]�t�@�ӥH�W�� '0' �C
    (1) �@�Ӱ϶��u���@�� '0'�G��ܱ��U�ӥX�{���Ȭ� 1�]�Y���ЭȬ� 1)�C
    (2) �@�Ӱ϶������ '0'�G��ܱ��U�ӥX�{���Ȭ� 0�]�Y���ЭȬ� 0)�C
    (3) �@�Ӱ϶��� n (n>2)�� '0'�G��ܥX�{(n-2)�ӵ��ЭȡC

�`�N�G�C�ӼƭȪ��Ĥ@�Ӱ϶��A�̦h�u����� '0'�C�Ҧp�G�@�i��t�Ϊ��ƭ� "0 0000 00 000 0 0000" �A�̷ӤW�z����ܤ�k�A�Y�i�ഫ���G�i��t�Ϊ� "11011"�C

�ഫ�᪺�G�i��Ʀr�A�̦h���|�W�L 30 ��ơC�ഫ������A�бN���G�i��ƭ��ഫ���Q�i��(�Y�� 27)��X�C

��J
��J�ɨC��N��@�Ӥ@�i�쪺�ƭȡA�̫�H "#" �Ÿ������C�YŪ����Y�@��u�]�t�@�Ӧr�� "~"�A�h�������{���C

��X
�N�C�@�Ӥ@�i��ƭ��ഫ���Q�i���A�H�@���X�C

��J�d��
0 0000 00 000 0 0000 #
0 0000 #
~
��X�d��
27
3
**************************************************************/

/**************************************************************
    Problem: 1002
    User: max2124
    Language: C++
    Result: Accepted
    Time:12 ms
    Memory:1560 kb
****************************************************************/
