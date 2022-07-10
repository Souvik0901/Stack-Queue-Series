Approach 1: CodeStudio Solution

void SortedInsert(stack<int>&st,int elm)
{
    if(st.empty() || st.top()<elm)
    {
        st.push(elm);
        return;
    }
    int num = st.top();
    st.pop();
    SortedInsert(st,elm);
    st.push(num);
}

void sortStack(stack<int> &stack)
{
	if(stack.empty())
    {
        return;
    }
    int n= stack.top();
    stack.pop();
    sortStack(stack);
    SortedInsert(stack,n);
}

------------------------------------------------------------------------------------------------------------------------------------
Approach 2: GFG Solution

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void InsertSort(int elm,stack<int>&s)
{
    if(s.empty()|| s.top()<elm)
    {
        s.push(elm);
        return;
    }
    int num =s.top();
    s.pop();
    InsertSort(elm,s);
    s.push(num);
    
}


void SortedStack :: sort()
{
   //Your code here
   if(s.empty())
   {
       return;
   }
   int n= s.top();
   s.pop();
   sort();
   InsertSort(n,s);
}


------------------------------------------------------------------------------------------------------------------------------------
Approach 3: VisualCode Solution

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
------------------------------------------------------------------------------------------------------------------------------------------------
