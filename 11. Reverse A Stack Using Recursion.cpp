
#include<bits/stdc++.h>
using namespace std;
void PushAtbottom(stack<int>&mystack, int elm)
{
   if(mystack.empty())
   {
      mystack.push(elm);
      return;
   }
   int n =  mystack.top();
   mystack.pop();
   PushAtbottom(mystack,elm);
   mystack.push(n);
}
void reversestack(stack<int>&st)
{
    if(st.empty())
    {
        return;
    }
    int num =st.top();
    st.pop();
    reversestack(st);
    PushAtbottom(st,num);
}



int main()
{
    stack<int>st;
    st.push(9);
    st.push(6);
    st.push(99);
    st.push(3);
    reversestack(st);
    stack<int>extra;
    while (!st.empty())
    {
        extra.push(st.top());
        st.pop();
    }
    cout<<"After Reverse the elements inside stack, \nEntire stack look like: \n";
    while(!extra.empty())
    {
        cout<<extra.top()<<" ";
        extra.pop();
    }
    
}
