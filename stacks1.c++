#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int data=0;
    for(int i=0;i<8;i++){
        cin>>data;
        v.push_back(data);
    }
    stack<int>s;
    s.push(v[0]);
    for(int i=1;i<8;i++){
        if(!s.empty()){
            if(v[i]==s.top())
            s.pop();
            else{
                s.push(v[i]);
            }
        }
        else{
            s.push(v[i]);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<"  ";
        s.pop();
    }
}