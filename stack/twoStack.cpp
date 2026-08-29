#include<iostream>
using namespace std;

int pop1(int arr[], int *top1)
{
    if(*top1>=0)
    {
        int value=arr[*top1];
        (*top1)--;
        return value;
    }
    else
    {
        cout<<"stack underflow ";
        return -1;
    } 
}

int pop2(int arr[], int *top2, int size)
{
    if(*top2<size)
    {
       int value=arr[*top2];
        (*top2)++;
        return value;
     
    }
    else
    {
        cout<<"stack underflow ";
        return -1;
    }
    
}

void push1(int arr[], int *top1, int *top2, int value)
{
    if((*top2)-(*top1)>1)
    {
        (*top1)++;
        arr[*top1]=value;
        return;
    }
    else
    {
        cout<<"stack overflow ";
        return;
    }

}

void push2(int arr[], int *top2, int *top1, int value)
{
    if(*top2-*top1>1)
    {
        (*top2)--;
        arr[*top2]=value;
        return;
    }
    else
    {
        cout<<"stack overflow ";
        return;
    }
}

void print(int arr[], int size)
{
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int value;
    int size1;
    int size2;
    cout<<"enter size1 ";
    cin>>size1;

    cout<<"enter size2 ";
    cin>>size2;

    const int MAX=50;

    int size=size1+size2;
    if(size>MAX)
    cout<<"Enter small size ";

    int top1=-1;
    int top2=size;
    
    int arr[MAX];

    cout<<"enter stack 1";
    for(int i=0; i<size1; i++)
    {
        cin>>value;
        push1(arr, &top1, &top2, value);
    }

    for(int i=0; i<size2; i++)
    {
        cin>>value;
        push2(arr, &top2, &top1, value);
    }
    print(arr, size);
}
