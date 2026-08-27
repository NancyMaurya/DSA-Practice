#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans=0;

    for(int i=0; i<size; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[9]={1, 2, 3, 4, 1, 5, 2, 3, 4};
    cout<<"unique element is-"<<findUnique(arr, 9);
    return 0;
}