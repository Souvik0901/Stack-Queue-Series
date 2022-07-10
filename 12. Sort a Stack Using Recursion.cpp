

#include<bits/stdc++.h>
using namespace std;

void SortedInsert(stack<int>&stack,int elm)
{
    if(stack.empty() || (!stack.empty() and stack.top()<elm ))
    {
        stack.push(elm);
        return;
    }
    int num = stack.top();
    stack.pop();
    SortedInsert(stack,elm);
    stack.push(num);
}


void SortStack(stack<int>&st)
{
    if(st.empty())
      return;
    
    int n =st.top();
    st.pop();
    
    SortStack(st);
    SortedInsert(st,n);
    
}


int main()
{
    stack<int>st;
    st.push(-9);
    st.push(8);
    st.push(-1);
    st.push(-5);
    st.push(10);
    SortStack(st);
    vector<int>ans;
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    for(int i=0; i<ans.size();i++)cout<<ans[i]<<" ";
}
