#include<iostream>
using namespace std;

void reverseNumber(int n, int reversed)
{
    if(n==0)
    {
        cout<<reversed;
    return;
    }
    

    int digit=n%10;
    n=n/10;
    reversed=reversed*10+digit;
    reverseNumber(n, reversed);



}
int main()
{
    int n;
    cout<<"enter a number to reverse ";
    cin>>n;
    reverseNumber(n, 0);
}