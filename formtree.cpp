#include<bits/stdc++.h>
using namespace std;
int max_level = 0;
class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        this->data = data;
        this->left =NULL;
        this->right = NULL;
    }
};
void Construct(vector<int>v,int index,TreeNode* root,int size){
    if(root == NULL) return;
    if(2*index+2>=size - 1) return;
    if(v[2*index+1]!=-1)
    root->left =new TreeNode(v[2*index+1]);
    Construct(v,2*index+1,root->left,size);
    if(v[2*index+2]!=-1)
    root->right = new TreeNode(v[2*index+2]);
    Construct(v,2*index+2,root->right,size);
}
void print(TreeNode* root){
    if(root == nullptr) return;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
void leftView(TreeNode* root,int level){
    if(root == nullptr) return;
    if(max_level<level){
        cout<<root->data<<" ";
        max_level = level;
    }
    leftView(root->left,level+1);
    leftView(root->right,level+1);
}
int main(){
    int n,x;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    TreeNode* root = new TreeNode(v[0]);
    Construct(v,0,root,v.size());
    cout<<"Print:"<<endl;
    print(root);
    cout<<endl;
    cout<<"LeftView:"<<endl;
    leftView(root,1);
}