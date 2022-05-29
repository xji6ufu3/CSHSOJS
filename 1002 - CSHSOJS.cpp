#include <iostream>
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

