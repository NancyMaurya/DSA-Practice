#include<iostream>
#include<limits.h>
using namespace std;
// int main()
// {
//     int arr[6]={2,89,4,78,54,13};
//     int i;
//     int max=arr[0];
//     int min=arr[0];
//     for(i=0;i<6;i++)
//     {
//         if(arr[i]>max)
//         max=arr[i];
//     }
//     for(i=0;i<6;i++)
//     {
//         if(arr[i]<min)
//         min=arr[i];
//     }
//     cout<<"minimum is"<<min<<endl;
//     cout<<"maximum is"<<max<<endl;
//     return 0;

// }

// -----------------------2nd way--------------------------------------

int getMax(int num[],int n)
{
    int max=INT_MIN;
     for(int i=0;i<n;i++)
     {
        //mxi=max(maxi,num[i])
        if(num[i]>max)        
        max=num[i];
     }

     return max;
}

int getMin(int num[],int n)
{
    int min=INT_MAX;
     for(int i=0;i<n;i++)
     {
        //mini=max(mini,num[i])

        if(num[i]<min)
        min=num[i];
     }

     return min;
}

int main()
{
    int size;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"maximum is"<<getMax(num,size)<<endl;
    cout<<"minimum is"<<getMin(num,size)<<endl;

    return 0;

}