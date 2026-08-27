#include<iostream>
using namespace std;

int fact(int num)
{
    int f=1;
    for(int i=1;i<=num;i++)
    f=f*i;
    return f;
}
int main()
{
    int n,r;
    cout<<"enter n" ;
    cin>>n;

    cout<<"enter r" ;
    cin>>r;

    int nf=fact(n);
    int rf=fact(r);
    int nrf=fact(n-r);

    int ncr=(nf/(rf*nrf));
    
    cout<<"factorial is " << ncr;
    
    return 0;
}