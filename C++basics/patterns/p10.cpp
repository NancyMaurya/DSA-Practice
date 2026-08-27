#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no of rows"<<endl;
    cin>>n;
    int row=1;
    int cnt=1;
    int col=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            char ch='A'+row-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}