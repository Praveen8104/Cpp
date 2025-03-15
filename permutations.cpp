#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<int>& v, int ind){
    vector<vector<int>> ans;
    int n = v.size();
    if(ind == n){
        ans.push_back(v);
        return ans;
    }
    for(int i=ind; i < n; i++){
        swap(v[ind],v[i]);
        vector<vector<int>> temp = solve(v,ind+1);
        for(int j=0; j<temp.size(); j++){
            ans.push_back(temp[j]);
        }
        swap(v[i],v[ind]);
    }
    return ans;
}

int main(){
    vector<int> v = {1,2,3,4};
    vector<vector<int>> ans = solve(v,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
