#include<iostream>
using namespace std;


int firstOcc(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid= start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(key<mid){
            end=mid-1;
        }
        else if(key>mid){
            start=mid+1;
        }

        mid= start+(end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start=0;
    int end=size-1;
    int mid= start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(key==arr[mid]){
            ans=mid;
            start=mid+1;
        }
        else if(key<mid){
            end=mid-1;
        }
        else if(key>mid){
            start=mid+1;
        }

        mid= start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int arr[5]={1,2,2,3,3};
    int occ1=firstOcc(arr, 5, 3);
    cout<<"first occurance at index "<<occ1;
    int occL=lastOcc(arr, 5, 3);
    cout<<"last occurance at index "<<occL;
}