#include<bits/stdc++.h>
using namespace std;
int operation(int v1, int v2, char op){
    if(op=='+'){return v1+v2;}
    else if (op=='-'){return v1-v2;}
    else if (op=='*'){return v1*v2;}
    else if(op=='/'){return v1/v2;}
    return 0;
}
int pre(char op){
    if (op=='+' or op=='-'){return 1;}
    else if (op=='*' or op=='/'){return 2;}
    else return 0;
}
int main(){
    string s;
    cin >> s;
    stack<char> ope;
    stack<int> nums;
    if(s[0]=='-') nums.push(0);
    for(int i = 0; i < s.size(); i++){
        if (isdigit(s[i])){
            int n = 0;
            while(isdigit(s[i])){
                n = (n*10) + (s[i]-'0');
                i++;
            }
            nums.push(n);
            i--;
        }
        else if(s[i]=='('){
            if(isdigit(s[i-1])) ope.push('*');
            if(!isdigit(s[i+1]))nums.push(0);
            ope.push(s[i]);
        }
        else if(s[i]==')'){
            while(!ope.empty() and ope.top()!='('){
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                char op = ope.top();
                ope.pop();
                nums.push(operation(v1,v2,op));
            }
            if(!ope.empty()) ope.pop();
        }
        else{
            while(!ope.empty() and pre(s[i]) <= pre(ope.top())){
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                char op = ope.top();
                ope.pop();
                nums.push(operation(v1,v2,op));
            }
            ope.push(s[i]);
        } 
    }
    while(!ope.empty() and nums.size()>1){
        int v2 = nums.top();
        nums.pop();
        int v1 = nums.top();
        nums.pop();
        char op = ope.top();
        ope.pop();
        nums.push(operation(v1,v2,op));
    }
    cout << nums.top();
}