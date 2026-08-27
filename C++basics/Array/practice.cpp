#include<iostream>
using namespace std;

void reverse(int arr[], int size)
{
    for(int i=0; i<size/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[5]={3, 6, 2, 8, 2};
    reverse(arr, 5);
}