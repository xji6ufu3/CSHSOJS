#include<cstdio>
#include<vector>
using namespace std;
int main()
{
    vector<int> v[105];
    int a,s,d,f;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&s);
        if(s==1)
        {
            scanf("%d%d",&d,&f);
            v[d].push_back(f);
        }
        else if(s==2)
        {
            scanf("%d%d",&d,&f);
            for(int q=0;q<f;q++)
            {
                if(!v[d].empty())
                v[d].pop_back();
            }
        }
        else
        {
            scanf("%d%d",&d,&f);
            printf("%d\n",v[d][f]);
        }
    }
}

/**************************************************************
1134: �n������ĤG��
�ɶ�����: 5 Sec  �O���魭��: 128 MB

�D�شy�z
�����w������|�|�֡A�ӥB�|�|�ܦh�|�A�C�Ӥ�������ӽs���A�b�����L�{���L�D�n�|���T��Ʊ�

1.      �b��k������A���W�|���

2.      �q��k�����W��A����a�Ӥ��

3.      �ݬݲ� K�諸��n�Ӥ���O�ƻ�

��J
���C�մ���A��J���Ĥ@�榳�@�ӥ����n(n<=1000000)�A�N����n�Ӿާ@

���C�Ӿާ@�A���T�ءG

1 k a: �b��k������W��A��W�s����a���n��

2 k a: �b��k�����諸�W��A����a��

3 k a: �߰ݲ�k�����諸��a�Ӥ���O�ƻ�s��(�̤U�誺�������0��)

0<=a<=109, 0<=n<106, 0<=k<100

��X
���C���߰ݡA��X�n��s��

��J�d��
9
1 0 6
1 0 2
1 2 2
1 1 5
1 0 3
3 0 1
2 0 2
1 0 9
3 0 1
��X�d��
2
9
����
�Х�printf�[�ֿ�X�Aprintf���榡�p�U


printf("%d\n,a); //���P��cout<<a<<endl; a�����



���d�ҿ�J�A����諸�ܤƦp�U


1 0 6 => {6}


1 0 2 => {6,2}


1 2 2 => {6,2},{},{2}


1 1 5 => {6,2},{5},{2}


1 0 3 => {6,2,3},{5},{2}


3 0 1 => 2


2 0 2 => {6},{5},{2}


1 0 9 => {6,9},{5},{2}


3 0 1 => 9


****************************************************************/

/**************************************************************
    Problem: 1134
    User: max2124
    Language: C++
    Result: Accepted
    Time:388 ms
    Memory:7216 kb
****************************************************************/
