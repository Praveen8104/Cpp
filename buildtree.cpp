#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->right = nullptr;
        this->left = nullptr;
    }
};

class BuildTree {
public:
    Node* root;
    static int preIndex;
    Node* buildTree(vector<int>& in,vector<int>& pre, int inStrt, int inEnd) {
        if (inStrt > inEnd) return nullptr;
        Node* tNode = new Node(pre[preIndex++]);
        if (inStrt == inEnd) return tNode;
        int inIndex = search(in, inStrt, inEnd, tNode->data);
        tNode->left = buildTree(in, pre, inStrt, inIndex - 1);
        tNode->right = buildTree(in, pre, inIndex + 1, inEnd);
        return tNode;
    }

    int search(vector<int>& arr, int strt, int end, int value) {
        int i;
        for (i = strt; i <= end; i++) {
            if (arr[i] == value)
                return i;
        }
        return i;
    }

    void printPostorder(Node* node) {
        if (node == nullptr)
            return;
        printPostorder(node->left);
        printPostorder(node->right);
        cout << node->data << " ";
    }
};
int BuildTree::preIndex = 0;
int main() {
    BuildTree tree;
    vector<int> in;
    vector<int> pre;
    int n,x;
    cin >> n;
    cout<<"Inorder:"<<endl;
    for(int i = 0; i < n; i++){
        cin >> x;
        in.push_back(x);
    }
    cout<<"Preorder:"<<endl;
    for(int i = 0; i < n; i++){
        cin >> x;
        pre.push_back(x);
    }
    int len = in.size();
    Node* root = tree.buildTree(in, pre, 0, len - 1);
    tree.printPostorder(root);
    cout <<endl;
    return 0;