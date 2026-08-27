// #include<iostream>
// using namespace std;

// void reverse(int arr[], int size)
// {
//     int temp;
//     for(int i=0; i<(size/2); i++)
//     {
//         temp=arr[i];
//         arr[i]=arr[size-i-1];
//         arr[size-i-1]=temp;

//     }
//     cout<<"reversed array is ";
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// int main()
// {
//     int arr[6]={4, 42, 7, 1, 52};
//     reverse(arr, 5);

//     return 0;
// }

// // ======================swap alternate================================
// ==========================wrong=================================
// #include<iostream>
// using namespace std;

// void reverse(int arr[], int size)
// {
//     int temp;
//     for(int i=0; i<(size/2); i++)
//     {
//         temp=arr[i];
//         arr[i+1]=arr[size-i-2];
//         arr[size-i-1]=temp;

//     }
//     cout<<"reversed array is ";
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// int main()
// {
//     int arr[6]={4, 42, 7, 1, 52};
//     reverse(arr, 5);

//     return 0;
// 