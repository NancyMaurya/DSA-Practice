#include<iostream>
using namespace std;

void push(int stack[], int size, int *top, int value)
{
    if(*top==size-1)
    {
        cout<<"Stack overflow ";
        return;
    }

    (*top)++;
    stack[*top]=value;
    
}

int pop(int stack[], int *top)
{
    if(*top==-1)
    {
        cout<<"stack underflow ";
        return -1;
    }
    int value=stack[*top];
    (*top)--;

    return value;
}

int isempty(int stack[], int *top)
{
    if(*top==-1)
    {
        return 1;
    }
    else
    return 0;
}

void insertAtBottom(int stack[], int *top, int toInsert, int size)
{
    if(isempty(stack, top))
    {
        push(stack, size, top, toInsert);
        return;
    }

    int val=pop(stack, top);     //stores the values in val
    insertAtBottom(stack, top, toInsert, size);    //calls till base case reached
    push(stack, size, top, val);        //pushes the given value 
}

void print(int stack[], int *top)
{
    for(int i=0; i<=*top; i++)
    {
        cout<<stack[i]<<" ";
    }
}

int main()
{
    int top=-1;

    int stc[50];
    cout<<"enter size ";
    int size;
    cin>>size;

    cout<<"enter stack ";
    for(int i=0; i<size; i++)
    {
        cin>>stc[i];
        top++;
    }

    int value;
    cout<<"enter value to insert at bottom ";
    cin>>value;
    insertAtBottom(stc, &top, value, size);
    print( stc, &top);
}