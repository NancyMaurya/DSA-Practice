#include<iostream>
using namespace std;

void printrowSum(int arr[][4], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        int sum=0;
        for(int j=0; j<col; j++)
        {
            sum += arr[i][j]  ;
        }
        cout<<"sum="<<" "<<sum<<endl;
    }


}

void printcolSum(int arr[][4], int row, int col)
{
    for(int i=0; i<col; i++)
    {
        int sum=0;
        for(int j=0; j<row; j++)
        {
            sum += arr[j][i]  ;
        }
        cout<<"sum="<<" "<<sum<<endl;
    }
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
    
    printrowSum(arr, 3, 4);

    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printcolSum(arr, 3, 4);
}