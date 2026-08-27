#include<iostream>
using namespace std;

void printArr(int arr[], int n)
{
    cout<<"alternatly reversed array is ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void swapAlt(int arr[], int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        swap(arr[i], arr[i+1]);
    }
}
 int main()
 {
    int even[8]={3, 5, 2, 7, 1, 8, 4, 0};
    int odd[5]={4, 6, 1, 3, 8};

    swapAlt(even, 8);
    printArr(even,8);

    return 0;

 }