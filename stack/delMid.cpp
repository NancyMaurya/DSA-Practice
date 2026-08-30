#include<iostream>
#include<stack>
using namespace std;

void deleteMid(stack<int>&inputStack, int size, int count)
{
    if(size==0)
    {
        return;
    }
    if(count==size/2)
    {
        inputStack.pop();
        return;

    }
    int num=inputStack.top();
    inputStack.pop();

    deleteMid(inputStack, size, count+1);
    inputStack.push(num);
}

void print(stack<int>inputStack, int size)
{
    while(!inputStack.empty())
    {
        cout<<(inputStack.top())<<" ";
        inputStack.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int>s;
    int size;
    cout<<"enter size of stack ";
    cin>>size;

    int value;
    cout<<"Enter stack ";
    for(int i=0; i<size; i++)
    {
        cin>>value;
        s.push(value);
    }

    print(s, size);
    deleteMid(s, size, 0);
    print(s, size);
}
