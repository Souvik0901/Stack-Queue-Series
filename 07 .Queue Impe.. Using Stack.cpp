

#include<bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int>st1;
    stack<int>st2;
    public:
     void Push(int data)
     {
        st1.push(data);
     }

     int Pop()
     {
        if(st1.empty() and st2.empty())
        {
            cout<<"Queue is Empty\n";
            return -1;
        }

        if(st2.empty())
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int TopEl;
        TopEl= st2.top();
        return TopEl;
     }

   
};

int main()
{
    Queue q;
    q.Push(9);
    q.Push(8);
    q.Push(89);
    q.Push(7);
    cout<<"Pop Element :"<<q.Pop()<<endl;
  
}
