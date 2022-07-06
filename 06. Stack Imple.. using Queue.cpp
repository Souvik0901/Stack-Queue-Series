
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
