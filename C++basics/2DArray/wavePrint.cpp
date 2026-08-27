#include<iostream>
using namespace std;

void input(int arr[][4], int col, int row )
{
    cout<<"Enter array : ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }
}

void printWave(int arr[][4], int col, int row)
{
    for(int j=0; j<col; j++)
    {
        if(j%2!=0)
        {
            for(int i=row-1; i>=0; i--)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

        else
        for(int i=0; i<row; i++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;

    }
}

int main()
{
    int arr[4][4];
    

    input(arr,4,4 );

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    cout<<"printing wave : "<<endl;
    printWave(arr,4,4);


    
}