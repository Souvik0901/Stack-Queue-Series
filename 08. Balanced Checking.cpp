
Approach: 1
    
#include<bits/stdc++.h>
using namespace std;

bool isbalanced(string s)
{
    stack<char>st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);

        else 
        {
            if(s[i]==')' and st.top()=='(' || 
               s[i]=='}' and st.top()=='{' || 
               s[i]==']' and st.top()=='[') st.pop();
            
            else
              return false;
        }

    }

    if(!st.empty())
        return false;
    
    return true;
}

int main()
{
    string s="{[()]}";
    if(isbalanced(s))
     cout<<"True its balanced";
    else
     cout<<"False, not balanced";
}







Approach: 2

#include<bits/stdc++.h>
using namespace std;
bool isbalanced(string s)
{
    stack<char>st;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }

        else if(s[i]==')')
        {
            if(st.top()=='(')
               st.pop();
            else
               return false;
        }

          else if(s[i]=='}')
        {
            if(st.top()=='{')
               st.pop();
            else
               return false;
        }

          else if(s[i]==']')
        {
            if(st.top()=='[')
               st.pop();
            else
               return false;
        }
    }

    if(!st.empty())
    {
        return false;
    }
    return true;
}

int main()
{
    string s="{[(])]}";
    if(isbalanced(s))
     cout<<"True its balanced";
    else
     cout<<"False, not balanced";
}


