#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    cout << "enter array";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
        cout<<endl;
    }

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }

    cout << "sum is" << sum;
}