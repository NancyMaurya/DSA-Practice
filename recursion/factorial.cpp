#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)   //base condition is when number becomes 0 we return to factorial
    return 1;

    // here when we have to find the factorial of 5 lets say we do 5 X 4! so here big problem is finding 5 X 4! and small is finding (5-1)! thats how recursion works
    int small=factorial(n-1);   //runs until meets the base condition
    int big=n*small;
    return big;
}

int main()
{
    int n;
    cout<<"enter number "<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"factorial is "<<ans;
}
