


#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&st, int count, int size)
{
    if(count ==size/2)
    { 
         st.pop();  
         return;  // This return will call return recursive call
    }
    int num = st.top();
    st.pop();
    solve(st,count+1,size);
    st.push(num);  // in return call num will be push.
}
void deleteMid(stack<int>&st, int size)
{
   int count =0;
   solve(st,count,size);
   stack<int>dis;
   while(!st.empty())
   {
    dis.push(st.top());
       st.pop();
   }

   while(!dis.empty())
   {
      cout<<dis.top()<<" ";
      dis.pop();
   }
}
int main()
{
    stack<int>st;
    st.push(9);
    st.push(7);
    st.push(0);
    st.push(98);
    st.push(7);
    int size= st.size()-1;
    deleteMid(st,size);
}
