//to input a string with white space character, tab character
#include<iostream>
#include<string>
using namespace std;


int main()
{
    char str[20];
    cout<<"enter string ";
    cin.getline(str, 20);
    cout<<endl;
    cout<<str;
}

// int main()
// {
//     string s;
//     cout << "Enter string: ";
//     getline(cin, s);

//     string part;
//     cout << "Enter part: ";
//     getline(cin, part);

//     cout << "New string is " << removeSub(s, part);
// }