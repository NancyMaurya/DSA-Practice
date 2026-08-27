#include<iostream>
using namespace std;

void enqueue(int arr[], int size, int value, int *rear, int *front)
{
    if(*rear>=size-1)
    {
        cout<<"queue overflow ";
        return;
    }
    
    (*rear)++;

    if(*front == -1)
    *front = 0;

    arr[*rear]=value;
}

void dequeue(int arr[], int *front, int *rear)
{
    if((*front)==-1)
    {
        cout<<"queue underflow ";
        return;
    }
    
    // int value=arr[*front];
    (*front)++;

    if(*front > *rear)
    {
        *front = -1;
        *rear = -1;
    }
}

int peek(int arr[], int *front)
{
    if(*front==-1)
    {
        cout<<"queue underflow ";
        return -1;
    }
    
    int value=arr[*front];
    return value;
}

int main()
{
    int rear=-1;
    int front=-1;

    const int MAX=50;
    int arr[MAX];
    
    int size;
    cout<<"enter size of queue : ";
    cin>>size;

    cout<<"enter the queue ";
    int value;
    for(int i=0; i<size; i++)
    {
        cin>>value;
        enqueue(arr,  size,  value,  &rear, &front);
    }
    

    cout<<"first element "<<peek( arr, &front);

    dequeue( arr,  &front, &rear);
}