#include<iostream>
using namespace std;

bool EvenOdd(int a)
{
    if(a&1)      //every even number ends with 0 so 0&1 will give 0
    return 0;

    else         //every odd number ends with 1 so 0&1 will give 1
    return 1;
}

int main()
{
    int num;
    cout<< "enter number ";
    cin>>num;

    if(EvenOdd)
    cout<<"odd ";

    else
    cout<<"even";

    return 0;
}

