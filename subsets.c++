#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[4]={1,2,3,4};
	int length=4;
	for(int i=0;i<pow(2,length);i++)
	{
		int index=0;
		int n = length;
		while(n)
		{
			n--;
			if(i&(int)pow(2,n)){
				cout<<a[index]<<" ";
			}
			index++;
		}
		cout<<endl;
	}
}
