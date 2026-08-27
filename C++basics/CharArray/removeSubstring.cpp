#include<iostream>
using namespace std;

string removeSub(string s, string part)
{
    while(s.length()!=0 && s.find(part)<s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;

}
int main()

{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    string part;
    cout << "Enter part: ";
    getline(cin, part);

    cout << "New string is " << removeSub(s, part);
}
