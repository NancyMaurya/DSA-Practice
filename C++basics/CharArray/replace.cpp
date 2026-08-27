// #include<iostream>
// using namespace std;

// string replaceSpaces(char str[])
// {
//     string temp="";
//     for(int i=0; str[i]!='\0'; i++)
//     {
//         if(str[i]==' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         temp.push_back(str[i]);
//     }
//     return temp;
// }
// int main()
// {
//     char str[30];
//     cout<<"enter string ";
//     cin.getline(str, 30);
//     cout<<"NEW STRING IS-"<<replaceSpaces(str);
// }

#include<iostream>
using namespace std;

int top = -1;

void push(int stack[], int size, int value)
{
    if(top == size-1)
    {
        cout<<"Stack Overflow\n";
        return;
    }

    top++;
    stack[top]=value;
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack Underflow\n";
        return;
    }

    top--;
}

int peek(int stack[])
{
    if(top==-1)
    {
        cout<<"Stack Empty\n";
        return -1;
    }

    return stack[top];
}

bool isEmpty()
{
    return top==-1;
}

bool isFull(int size)
{
    return top==size-1;
}

int main()
{
    int stack[5];

    push(stack,5,10);
    push(stack,5,20);
    push(stack,5,30);

    cout<<"Top element: "<<peek(stack)<<endl;

    pop();

    cout<<"Top element after pop: "<<peek(stack)<<endl;

    return 0;
}