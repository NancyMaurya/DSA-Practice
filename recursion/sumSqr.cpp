#include<iostream>
using namespace std;

int sumSquares(int n)
{
    if(n==0)
    return 0;

    return (n*n)+sumSquares(n-1);
}
int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;

    cout<<sumSquares(n);

}