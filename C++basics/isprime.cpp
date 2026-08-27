#include<iostream>
using namespace std;

void isprime(int n)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        cnt++;
    }
    if(cnt==2)
    cout<<"prime";
    else
    cout<<"not prime";

}
int main()
{
    int num;
    cout<<"enter a number ";
    cin>>num;

    isprime(num);
}