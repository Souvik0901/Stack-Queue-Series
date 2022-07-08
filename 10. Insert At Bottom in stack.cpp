

#include<bits/stdc++.h>
using namespace std;

void PushAtbottom(stack<int>&st, int data)
{
    if(st.empty())
    {
        st.push(data);
        return;
    }
    int n =  st.top();
    st.pop();
    PushAtbottom(st,data);
    st.push(n);
}

int main()
{
    stack<int>st;
    st.push(8);
    st.push(2);
    st.push(1);
    st.push(9);
    PushAtbottom(st,100);

    stack<int>extra;
    while (!st.empty())
    {
        extra.push(st.top());
        st.pop();
    }
    cout<<"After Insert the element, 100  at bottom the stack is :\n ";
    while (!extra.empty())
    {
        cout<<extra.top()<<" ";
        extra.pop();
    }  

}
