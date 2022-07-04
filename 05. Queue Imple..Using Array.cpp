


#include<bits/stdc++.h>
using namespace std;

class Queue
{ 
    int *arr;
    int front,rear;
    int curr_size;
    int max_size;
    public:
            Queue()
            {
                front= rear=-1;
                curr_size =0;
                max_size= 5;
                arr= new int[max_size];
            }

            void Push(int x)
            {
                if(rear== max_size)
                {
                    cout<<"Queue Is Full\n";
                    return;
                }

                else
                {
                    rear++;
                    arr[rear]=x;
                       
                }
            }

            void pop()
            {
            
                if(front==rear)
                {
                    cout<<"Queue is Empty\n";
                    return;
                }

                else
                {
                   for(int i=0; i<rear; i++)
                   {
                      arr[i]=arr[i+1];
                   }
                   rear--;
                }
                
            }

            void display()
            {
                if(front == rear )
                {
                    cout<<"Queue Is Empty";
                }
                else{
                for(int i=front+1; i<= rear; i++)
                {
                    cout<<arr[i]<<" ";
                }
                }
            }

};

int main()
{
   Queue q;
   q.Push(7);
   q.Push(8);
   q.Push(9);
   q.Push(3);
   q.Push(8); 
   q.Push(0);
   q.Push(1);
  

    q.display();
  

   return 0;
}
