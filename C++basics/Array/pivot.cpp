#include<iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid]>=arr[0]) //checks in the first line if true then shifts in next line
        {
            s=mid+1;
        }
        else          //comes here when pivot is found
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;    //returns the index
}

int main()
{
    int arr[5]={8,10,17,1,3};
    cout<<"pivot is"<<getPivot(arr,5)<<endl;
}