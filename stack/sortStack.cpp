#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &stack, int num)
{
    if(stack.empty() || stack.top()<num)
    {
        stack.push(num);
        return;
    }

    int n=stack.top();
    stack.pop();
    insertSorted(stack, num);
    stack.push(n);
}

void sortStack(stack<int> &stack)
{
    if(stack.empty())
    {
        return;
    }

    int num=stack.top();
    stack.pop();
    sortStack(stack);

    insertSorted(stack, num);
}

int main()
{
    stack<int> s;
    int size;

    cout << "Enter size of stack: ";
    cin >> size;

    cout << "Enter stack elements: ";
    for(int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        s.push(value);
    }

    sortStack(s);

    cout << "Sorted stack from top to bottom: ";
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}