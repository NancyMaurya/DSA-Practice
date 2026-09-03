#include <iostream>
#include <string>
using namespace std;

void push(char stack[], int size, int *top, char value)
{
    if(*top==size-1)
    {
        cout<<"Stack overflow ";
        return;
    }
    (*top)++;
    stack[*top]=value;
    
}

char pop(char stack[], int *top)
{
    if(*top==-1)
    {
        cout<<"stack underflow ";
        return 'u';
    }
    char value=stack[*top];
    (*top)--;

    return value;
}

bool validBracket(string str, char stack[], int size, int *top)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='{' || str[i]=='(' || str[i]=='[')
        {
            push(stack, size, top, str[i]);
            i++;
        }

        else if(str[i]=='}')
        {
            if(pop(stack, top)=='{')
            {
                i++;
            }

            else
            {
                return false;
            }
        }

        else if(str[i]==')')
        {

            if(pop(stack, top)=='(')
            {
                i++;
            }

            else
            {
                return false;
            }
        }

        else if(str[i]==']')
        {
            if(pop(stack, top)=='[')
            {
                i++;
            }

            else
            {
                return false;
            }
        }
        else
        i++;

    }
    if(*top==-1)
    return true;

    else
    return false;
}



int main()
{
    int top=-1;

    string s;
    cout << "Enter string: ";
    getline(cin, s);

    char stack[30];
    cout<<validBracket(s, stack, 30, &top);

}