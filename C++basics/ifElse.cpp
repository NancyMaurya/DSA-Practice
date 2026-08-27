#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any character"<<endl;
    cin>>ch;
    
    if(ch >= 'a' && ch <= 'z')
        cout << "small letter" << endl;

    else if(ch >= 'A' && ch <= 'Z')
        cout << "capital letter" << endl;

    else if(ch >= '0' && ch <= '9')
        cout << "numeric" << endl;

    else
        cout << "special character" << endl;

    return 0;
}