#include<iostream>
using namespace std;

void count(int n)
{
    // base case
    if(n==0)
    return ;

    // recursive relation
    count(n-1);

    // processing
    cout<<n;
     return;

}
int main()
{
    cout<<"enter number ";
    int n;
    cin>>n;

    count(n);
    
}