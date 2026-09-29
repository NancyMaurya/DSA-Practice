// given string contains only brackets if string is like {}{}”, “{{}}”, “{{}{}}” then it is valid else invalid
// check number of changes we have to do to make them valis for example in {{{} we have to change 1st index 
// { to } so count will be 1

#include<iostream>
#include<string>
#include<stack>
using namespace std;

int count(string str)
{
    stack <char> st;
    if(str.length()%2==1)
    return -1;

    else
    {
        for(int i=0; i<str.length(); i++)
        {
            char ch=str[i];

            if(ch=='{')
            {
                st.push(ch);
            }
            else if(ch=='}')
            {
                if(!st.empty() && st.top()=='{')
                {
                    st.pop();   //ignores valid pair
                }
                else
                st.push(ch);
            }
            
        }
        int a=0, b=0; //a=number of opening brackets b=number of closing brackets
            while(!st.empty())
            {
                if(st.top()=='{')
                {
                    a++;
                }
                else
                b++;

                st.pop();

            }
        int cnt=(a+1)/2+(b+1)/2;      //equation to get counts
        return cnt;

    }
}
int main()
{
    string str;
    cout<<"enter string ";
    cin>>str;
    cout<<"Number of counts for entered string is"<<count(str);
}