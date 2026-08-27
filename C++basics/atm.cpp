#include<iostream>
using namespace std;

int main()
{
    int amt;
    cout << "enter amount" << endl;
    cin >> amt;

    int n500=amt/500;
    amt=amt%500;

    int n100=amt/100;
    amt=amt%100;

    int n50=amt/50;
    amt=amt%50;

    int n20=amt/20;
    amt=amt%20;

    int n10=amt/10;
    amt=amt%10;

    int n5=amt/5;
    amt=amt%5;

    int n2=amt/2;
    amt=amt%2;

    int n1=amt/1;
    amt=amt%1;

    cout<<"no of 500 rupee notes-"<<endl;
    cout<<n500;

    cout<<"no of 100 rupee notes-"<<endl;
    cout<<n100;

    cout<<"no of 50 rupee notes-"<<endl;
    cout<<n50;

    cout<<"no of 20 rupee notes-"<<endl;
    cout<<n20;

    cout<<"no of 10 rupee notes-"<<endl;
    cout<<n10;

    cout<<"no of 5 rupee notes-"<<endl;
    cout<<n5;

    cout<<"no of 2 rupee notes-"<<endl;
    cout<<n2;

    cout<<"no of 1 rupee notes-"<<endl;
    cout<<n1;

return 0;
}