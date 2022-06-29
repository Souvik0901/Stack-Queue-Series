

#include<bits/stdc++.h>
using namespace std;


int main()
{
    queue<int>Q;
    Q.push(12);
    Q.push(9);
    Q.push(-2);
    Q.push(72);
    Q.push(21);
    Q.push(-34);

    while(!Q.empty())
    {
        cout<<Q.front()<<" ";
        Q.pop();
    }
}
