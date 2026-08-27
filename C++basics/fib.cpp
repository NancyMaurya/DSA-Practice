#include<iostream>
using namespace std;

int main()
{
    int i;
    int n;
    int a=0;
    int b=1;
    cout<<"enter n";
    cin>>n;
    cout<<a<<" " ;
    cout<<b<<" ";

    for(i=1;i<=n;i++){
    int nextnum=a+b;
    cout<<nextnum<<" ";
    a=b;
    b=nextnum;
    }
    return 0;
}