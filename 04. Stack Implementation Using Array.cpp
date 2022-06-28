

#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;              //Data Members
    int size;
    int top;
    
    public:
            Stack()             //Constructor
            {
                top =-1;
                size= 1000;
                arr = new int[size];
            }

            void push(int x)
            {  
                top++;
                arr[top] =x;
            }

            int pop()
            {
                int x = arr[top];
                top--;
                return x;
            }

            int topele()
            {
                return arr[top];
            }

            int Size()
            {
                return top+1;
            }

};


int main()
{
      Stack s;         // object created
      s.push(4);
      s.push(7);
      s.push(9);
      s.push(0);
      s.push(12);
      s.push(100);
      s.push(22);
      s.push(47);
      s.push(44);
      s.push(83);
      cout<<s.topele()<<endl;
      cout<<s.pop()<<endl;
      cout<<s.Size()<<endl;

    while(!s.Size()==0)
    {
        cout<<s.topele()<<" ";
        s.pop();
    }
}

