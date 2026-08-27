#include<iostream>
using namespace std;

void sum(int arr[], int size, int target)
{
    int start=0;
    int end=size-1;
    
    while(start<end)
    {
        int targetsum=arr[start]+arr[end];
        if(targetsum==target)
        {
            cout<<arr[start]<<arr[end]<<endl;
            return;
        }
        else if(targetsum<target)
        start++;
        else if(targetsum>target)
        end--;
    }
    cout<<"no pair found"<<endl;

}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n =5;
    sum(arr, 6, n);
}