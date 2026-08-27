#include<iostream>
using namespace std;

bool freqS1(string s1, string s2)
{
    int arr[26]={0};
    for(int i=0; i!=s1.length(); i++)
    {
        char ch=s1[i];

        int number=ch-'a';
        arr[number]++;
    }

    int arr2[26]={0};
    for(int i=0; i<s1.length(); i++)
    {
        char ch=s2[i];
        int number=ch-'a';
        arr2[number]++;
    }

    for(int i=0; i<26; i++)
    {
        if(arr[i]!=arr2[i])
        {
            
        }
    }
}



int main()
{
    string s;
    cout<<"enter string : ";
    getline(cin, s);

    string per;
    cout<<"enter the permutation you want to find : ";
    getline(cin, per);
}