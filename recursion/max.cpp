#include<iostream>
using namespace std;

int max(int arr[], int size)
{
    int maxEle=*arr;

    if(*arr>maxEle)
    {
        maxEle=*arr;
    }
    if(size==0)
        return maxEle;

    

    return max(arr+1, size-1);
    
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

    cout<<"maximum element is "<<max(arr, size);
}
