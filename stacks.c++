#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<float>st;
    st.push(4.9);
    st.push(5);
    st.pop();
    st.push(10);
    st.push(11);
    st.pop();
    st.pop();
    st.push(-3);
    st.push(13);
    stack<int>st1;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st1.push(st.top());
        st.pop();
    }
    // cout<<"\n";
    // while(!st1.empty())
    // {
    //     cout<<st1.top()<<" ";
    //     st1.pop();
    // }
}