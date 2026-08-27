#include<iostream>
using namespace std;

bool sorted(int arr[], int size)
{
    if(size<=1)
        return true;
        

    if(*arr>*(arr+1))
        return false;

    else
    return sorted(arr+1, size-1);
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

    if(sorted(arr, size))
        cout<<"sorted";

    else
    cout<<"unsorted";
}