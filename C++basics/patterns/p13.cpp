#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number of columns";
    int n;
    cin>>n;

    int row=1;
    char ch='A';

    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<ch;
            col=col+1;
            ch++;
          
        }
        cout<<endl;
        row++;

    }
}
// ABCDEF
// GHIJKL
// MNOPQR