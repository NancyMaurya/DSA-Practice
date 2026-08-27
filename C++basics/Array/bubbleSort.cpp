// #include<iostream>
// using namespace std;

// void BubbleSort(int arr[], int size)
// {
//     for(int i=0; i<size-1; i++)
//     {
//         for(int j=0; j<size-i-1; j++)
//         {
//             if(arr[j]>arr[j+1])
//             swap(arr[j], arr[j+1]);
//         }
//     }
//     for(int i=0; i<size; i++)
//     cout<<arr[i]<<" ";

// }

// int main()
// {
//     int arr[6]={1, 10, 9, 14, 6, 4};
//     BubbleSort(arr, 6);
// }

#include<iostream>
using namespace std;

void sort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }
}

void print(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5]={98, 45, 78, 24, 10};
    sort(arr, 5);
    print(arr, 5);
}
