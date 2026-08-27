#include<iostream>
using namespace std;

void sort(int arr[], int size)
{
    int temp;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>arr[i+1]){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
    }
    cout<<"sorted array ";

    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int arr[8]={3, 6, 9, 24, 4, 67, 3, 45 };
    sort(arr, 8);
}