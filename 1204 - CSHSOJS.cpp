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
1204: vector���򥻾ާ@�m��
�ɶ�����: 1 Sec  �O���魭��: 128 MB

�D�شy�z
���w�@�ƦC�����e(��J�ɡA�H0�N��ƦC������)�A���ۭn�ЧA����U�C�|�ؾާ@�G
1. Add XX�G�N�ƦrXX��i�h�ƦC����
2. Del�G�N�ƦC���̫�@�ӼƦr�R��
3. Qry�G�C�L�X���ƦC���Ҧ�����
4. Clear�G�N��ӼƦC���e�M��
�Y�ާ@��Del�A�B���ƦC�ثe���Ū��A�п�X"Error"�A���t�޸�
�Y�ާ@��Qry�A�B���ƦC�ثe���Ū��A�п�X"Empty"�A���t�޸�

�Ҧp�G
���U����J�d�ҡA�@�}�l���ǦC��
5 2 7 8 5
�Ĥ@�Ӿާ@ : �N2�[�J�ǦC������
5 2 7 8 5 2
�ĤG�Ӿާ@ : �L�X��ӧǦC
�ĤT�Ӿާ@ : �R���̫�@�ӼƦr
5 2 7 8 5
�ĥ|�Ӿާ@ : �R���̫�@�ӼƦr
5 2 7 8
�Ĥ��Ӿާ@ : �L�X��ӧǦC
�Ĥ��Ӿާ@ : �M����ӧǦC
�ҥH�ܦ��Ū�
�ĤC�Ӿާ@�Q�R���̫�@�ӼƦr
���ثe�ǦC�O�Ū��A�]����XError
�ĤK�Ӿާ@�Q�L�X��ӧǦC
���ثe�ǦC�O�Ū��A�]����XEmpty

��J
�Ĥ@�榳�Y�z�ӥ���ơA���@�}�l���ƦC�A�̫�@�ӼƦr�O�Ҭ�0�A���0���e�@�ӥ���Ƭ��ƦC������
�ĤG�榳�@����� Q�A��ܦ�Q���ާ@ (Q<=1000)
���U�|��Q���ާ@

��X
���D�ت����������Ҧ��ާ@

��J�d��
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

��X�d��
5 2 7 8 5 2
5 2 7 8
Error
Empty

�ӷ�
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
