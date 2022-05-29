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
�ɶ�����: 1 Sec  �O���魭��: 128 MB

�D�شy�z
�~�J�O�@�ӭөʩǲ�������C���@�ѡA�L�Q�b�q���ͨ����D������ؾ�A�H�K�X�X���ɭԥi�H�B���C��O�A�s�H�R�F�\�h��]�A�åB�b�C�@�ʾ�W����g�@�ӼƭȡA��ܳo�ʾ�n�شӪ���m�C�i�O�_�Ǫ��~�J����A�X�F�@�ӥt�������D�A�R�O�ؾ𪺤u�H������X�۾F��ʾ𪺳̤j�Z���O�h�֡A�H�K�b�o�q�Z����H�����B���C

��J
�C�����ո�Ƥ@�榳 n �ӼƭȥH�ťչj�}�A�C�@�ӼƭȪ�ܤ@�ʾ𪺺شӦ�m�C�䤤 n <=500�A�C�ʾ��g�شӦ�m���ƭȳ̤j��10000�A����ʾ�]���شӦ�m�i��ۦP�C

��X
�C�����ո�ƽп�X�@��A�Y�۾F��ʾ𪺳̤j�Z���C

��J�d��
25 66 1 35 8
123 45 99 6 21 12 8

��X�d��
31
54

����
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
