

Approach:1,  VSCode Solution :

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

---------------------------------------------------------------------------------------------------------------------------------
Approach:2, GEG Solution:

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int midelm= 0;
        if(sizeOfStack%2!=0)
          midelm= (sizeOfStack+1)/2;
        else
          midelm= (sizeOfStack)/2+1;
          
        stack<int>st;
        int count=1;
        
        while(count!=midelm)
        {
            int num= s.top();
            s.pop();
            st.push(num);
            count++;
        }
        if(count==midelm)
          s.pop();
          
        while(!st.empty())
        {
            s.push(st.top());
            st.pop();
        }
          
           
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends


----------------------------------------------------------------------------------------------------------------------------------------------
	
Approach:3, CodeStudio Solution:

void solve(stack<int>&st,int count, int size)
{
    if(size/2==count )
    {
        st.pop();
        return;
    }
    int num =st.top();
    st.pop();
    solve(st,count+1,size);
    st.push(num);

}


void deleteMiddle(stack<int>&inputStack, int N){
	int count =0;
    solve(inputStack,count,N);
    
   // Write your code here
   
}
