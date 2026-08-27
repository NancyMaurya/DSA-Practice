#include<iostream>
using namespace std;

int ap(int n)
{
    int nth=((3*n)+7);
    return nth;
}
    

int main()
{
    int a;
    cout<<"enter a number ";
    cin>>a;
    int ans=ap(a);
    cout<<ans;

}