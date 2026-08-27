#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
}

void sort012(int arr[], int size)
{
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==0)
        cnt0++;

        else if(arr[i]==1)
        cnt1++;

        else
        cnt2++;
    }

    for(int i=0; i<cnt0; i++)
    arr[i]=0;

    for(int i=cnt0; i<cnt0+cnt1; i++)
    arr[i]=1;

    for(int i=cnt0+cnt1; i<size; i++)
    arr[i]=2;
}

int main()
{
    int arr[9]={1, 1, 0, 0, 2, 2, 2, 0, 1};
    sort012(arr, 9);
    printArray(arr, 9);

    return 0;
}