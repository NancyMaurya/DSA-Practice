#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool redundantBracket(string &s )
{
    stack<char> st;
    for(int i=0; i<s.length(); i++)
    {
        char ch=s[i];

        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/' )
        st.push(ch);

        else
        {
            if(ch==')')
            {
                bool isredundant=true;
                while(st.top()!='(')
                {
                    char top=st.top();
                    if(top=='(' || top=='+' || top=='-' || top=='*' || top=='/' )
                    {
                        isredundant=false;
                    }
                    st.pop();
                }

                if(isredundant==true)
                return true;
                st.pop();
            }
        }
    }
    
    return false;
}
int main()
{
    cout<<"enter string ";
    string equation;
    cin>>equation;

    if(redundantBracket(equation))
    cout<<"redundant";

    else
    cout<<"not redundant";
}