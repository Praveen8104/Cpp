#include <bits/stdc++.h>
using namespace std;
int pre(char op){
	if(op == '+'||op == '-')
	return 2;
	if(op == '*')
	return 3;
	return 1;
}
int ope(int a, int b, char op){
	if (op=='+'){
	    return a+b;
	}
	else if (op=='-'){
	    return a-b;
	}
	return 0;
}
int main() {
    string s;
    cin>>s;
    int i;
	stack <int> nums;
	stack <char> ops;
	for(i = 0; i < s.length(); i++){
		if(s[i] == '('){
			ops.push(s[i]);
		}
		else if(isdigit(s[i])){
			int n = 0;
			while(isdigit(s[i]))
			{
				n = (n*10) + (s[i]-'0');
				i++;
			}
			nums.push(n);
			i--;
		}
		else if(s[i] == ')')
		{
			while(!ops.empty() && ops.top() != '(')
			{
				int v2 = nums.top();
				nums.pop();
				
				int v1 = nums.top();
				nums.pop();
				
				char op = ops.top();
				ops.pop();
				
				nums.push(ope(v1, v2, op));
			}
			if(!ops.empty()){
			    ops.pop();
			}
		}
		else
		{
			while(pre(s[i]) <= pre(ops.top())){
				int v2 = nums.top();
				nums.pop();
				
				int v1 = nums.top();
				nums.pop();
				
				char op = ops.top();
				ops.pop();
				
				nums.push(ope(v1, v2, op));
				if(ops.empty())
				break;
			}
			ops.push(s[i]);
		}
	}
	
	while(!ops.empty()){
		int v2 = nums.top();
		nums.pop();
				
		int v1 = nums.top();
		nums.pop();
				
		char op = ops.top();
		ops.pop();
				
		nums.push(ope(v1, v2, op));
	}
	cout<<(nums.top());
	return 0;
}
