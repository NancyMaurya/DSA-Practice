#include<iostream>
using namespace std;

int power(int base, int expo)
{
    if(expo==0)
    return 1;

    int x=power(base, expo-1);
    return x*base;
}
int main()
{
    int base;
    int expo;
    cout<<"enter base and expo ";
    cin>>base;
    cin>>expo;
    cout<<power(base, expo);
}