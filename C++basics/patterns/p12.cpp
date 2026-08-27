#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number of columns";
    int n;
    cin>>n;

    int row=1;

    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            char ch='A'+col-1;
            cout<<ch;
            col=col+1;
          
        }
        cout<<endl;
        row++;

    }
}