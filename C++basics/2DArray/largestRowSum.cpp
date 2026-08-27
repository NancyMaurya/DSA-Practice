#include<iostream>
#include<limits.h>
using namespace std;

void largestrowSum(int arr[][4], int row, int col)
{
    int maxi=INT_MIN;
    int rowIndex=-1;

    for(int row=0; row<3; row++)
    {
        int sum=0;
        for(int col=0; col<4; col++)
        {
            sum += arr[row][col]  ;
        }
        // cout<<"sum="<<" "<<sum<<endl;
        if(sum>maxi)
        {
        maxi=sum; 
        rowIndex=row;
        }
    }
    cout<<"maximum sum is "<<maxi<<endl;
    
}



int main()
{
    int arr[3][4];

    cout<<"enter the array ";
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        cin>>arr[row][col];
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    largestrowSum(arr, 3, 4);
}