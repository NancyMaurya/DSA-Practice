#include<iostream>
using namespace std;

int productDigits(int n)
{
    if(n/10==0)
    return n;

    int digit=n%10;
    int product=productDigits(n/10);
    return digit*product;
}

int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;
    cout<<productDigits(n);
}
