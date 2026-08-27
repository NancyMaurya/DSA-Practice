#include<iostream>
using namespace std;

int sumNatural(int n)
{
    if(n==1)
    return 1;

    int x=sumNatural(n-1);
    return x+n;

}

int main()
{
    int n;
    cout<<"enter n ";
    cin>>n;
    cout<<sumNatural(n);
}

