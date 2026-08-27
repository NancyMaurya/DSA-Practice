#include<iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
    for(int i=1; i<size; i++)
    {
        int temp=arr[i];
        int j;
        for(j=i-1; j>=0; j--)
        {
            if(arr[j]>temp)
            {
                //shift
                arr[j+1]=arr[j];
            }
            else
            break;
        }
        arr[j+1]=temp;
    }
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";

}

int main()
{
    int arr[6]={1, 10, 9, 14, 6, 4};
    InsertionSort(arr, 6);
}
