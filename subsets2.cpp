#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>v,int index,vector<int>ans,int  size)
{
	if(index>=size){
		for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
		cout<<endl;
		return;
	}
	ans.push_back(v[index]);
	subset(v,index+1,ans,size);
	ans.pop_back();
	subset(v,index+1,ans,size);
}
int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	vector<int>v2;
	subset(v,0,v2,v.size());
}
