#include<bits/stdc++.h>
using namespace std;
void solve(string s,int ind,vector<string>&s1){
    if(ind>=s.size()){
        s1.push_back(s);
        return;
    }
    for(int i=ind;i<s.size();i++){
        swap(s[ind],s[i]);
        solve(s,ind+1,s1);
        swap(s[i],s[ind]);
    }
}
int main(){
    vector<string>s1;
    string s;
    cin>>s;
    solve(s,0,s1);
    for(int i=0;i<s1.size();i++){
        cout<<s1[i]<<" ";
    }
}