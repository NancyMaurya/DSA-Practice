#include<iostream>
using namespace std;

void SelectionSort(int arr[], int size)
{

    for(int i=0; i<size; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<size;j++)
        {
            if(arr[j] < arr[minIndex])
            minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
    }
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[6]={23, 65, 43, 8, 15, 96};
    SelectionSort(arr, 6);
}