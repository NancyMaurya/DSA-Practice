#include<iostream>
using namespace std;

void enqueue()
{
    if(front==0 && rear==size-1 || (rear + 1) % size == front )  
    {
        cout<<"queue is full ";
        return;
    }

    else if(front==-1) //first element to push
    {
        rear=front=0;
        arr[rear]=value;
    }

    else if(rear==size-1 && front!=0)  //front is in between and rear is at end
    {
        rear=0;
        arr[rear]=value;
    }

    else     //normal case
    {
        rear++;
        arr[rear]=value;
    }

}

int dequeue()
{
    if(front == -1)
    {
        cout << "Queue is empty";
        return -1;
    }

    int ans = arr[front];
    arr[front] = -1;      // optional

    if(front == rear)     // only one element
    {
        front = rear = -1;
    }
    else if(front == size - 1) // wrap around
    {
        front = 0;
    }
    else
    {
        front++;
    }

    return ans;
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