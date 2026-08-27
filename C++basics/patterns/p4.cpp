#include<iostream>
using namespace std;

int main()
{
    int i=1;
    while(i<=4)
    {
        int j=4;
        while(j>=1)
        {
            cout<<j;
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}