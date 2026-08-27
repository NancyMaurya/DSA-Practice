#include<iostream>
using namespace std;

int findEle(int arr[], int element, int size)
{
    if(size==0)
        return -1;

    if(*arr==element)
        return 0;
        
    int ans=findEle(arr+1, element, size-1);

    if(ans==-1)
        return -1;
    
    return ans+1;
}

int main()
{
    const int MAX=50;
    int arr[MAX];
    int size;
    cout<<"Enter size of array ";
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int element;
    cout<<"Enter element you wan tto search ";
    cin>>element;

    cout<<findEle(arr, element, size);


}