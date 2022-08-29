Note:  When you declare the array in the following manner:

int array[5] = {};  
the memory for the variable named array is allocated on the stack. When the function or the enclosing scope ends, the variable is destroyed and the memory is reclaimed.
However, when you declare an array using the following syntax:

int *array = new int[5];  
The memory for the variable is allocated on the heap. Now it becomes the programmer’s responsibility to delete that memory; if you fail to delete it, it becomes a memory leak.
In case of the pointer based syntax, you can repeatedly delete and reallocate, as well; it allows you to have variable length arrays using the same variable.
 
    
    
Code:

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

