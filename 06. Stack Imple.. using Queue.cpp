
SDE Sheet Solution:

#include<bits/stdc++.h>
using namespace std;

class Stack
{
   queue<int>q;
   public:
    void Push(int data)
    {
        int size =q.size();
        q.push(data);
        for(int i=0; i<size; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int Pop()
    {
        int n = q.front();
        q.pop();
        return n;
    }
    int Top()
    {
        return q.front();
    }
    int Size()
    {
        return q.size();
    }

    void display()
    {
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
    }

};


int main()
{
    Stack s;
    s.Push(9);
    s.Push(0);
    s.Push(12);
    s.Push(99);
    cout<<"PopElement : "<<s.Pop()<<endl;
    cout<<"Top Most Element After removeing : "<<s.Top();
    cout<<"\n Display the stack : ";
    s.display();
}





         Leetcode Solution :

            class MyQueue {

            public:
                stack<int>st1;
                stack<int>st2;

                MyQueue() {

                }

                void push(int x) {
                    st1.push(x);
                }

                int pop() 
                {
                    if(st2.empty()){
                        while(!st1.empty())
                        {
                           st2.push(st1.top());
                            st1.pop();     
                        }
                    }

                    int elm = st2.top();
                    st2.pop();
                    return elm;
                }

                int peek() 
                {
                    if(st2.empty()){
                    while(!st1.empty())
                    {
                        st2.push(st1.top());
                        st1.pop();
                    }
                    }
                    return st2.top();
                }


                bool empty() 
                {
                    if(st1.empty() )return st2.empty();
                       return false;
                }

            };

            /**
             * Your MyQueue object will be instantiated and called as such:
             * MyQueue* obj = new MyQueue();
             * obj->push(x);
             * int param_2 = obj->pop();
             * int param_3 = obj->peek();
             * bool param_4 = obj->empty();
             */
