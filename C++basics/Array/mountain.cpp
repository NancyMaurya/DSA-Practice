// #include<iostream>
// using namespace std;

// int mountain(int arr[], int size)
// {
//     for(int i=1; i<=size-1; i++)
//     {
//         if(arr[i]>arr[i+1])
//         {
//         if(arr[i]>arr[i-1])
//         {
//             return arr[i];

//         }
//     }

//     }
//     return -1;
// }

// int main()
// {
//     int arr[5]={1,2,5,3,2};
//     cout<<mountain(arr, 5);
// }

// =============================================================================

#include <iostream>
using namespace std;

int mountain(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start) + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = (start) + (end - start) / 2;
    }
    return arr[start];
}

int main()
{
    int arr[7] = {1, 3, 5, 7, 6, 5, 4};
    // for(int i=1; i<=13; i=i+2)
    // {
    int ans = mountain(arr, 7); // i
    cout << ans;
    // }
}