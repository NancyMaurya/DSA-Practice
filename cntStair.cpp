#include<iostream>
using namespace std;

long long count(int nstairs)
{
    if(nstairs<=0)
    return 0;

    if(nstairs==1)
    return 1;

    int ans=count(nstairs-1)+count(nstairs-2);
    return ans;
}
int main()
{
    long long nstairs;
    cout<<"enter stairs ";
    cin>>nstairs;
    cout<<count(nstairs);

}
