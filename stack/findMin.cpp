// find minimum element after every element example inout array=[2, 1, 4, 3] output=[1, -1, 3, -1]
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> find(int arr[], int size)
{
    vector <int> ans(size);
    stack <int>st;
    st.push(-1);
    for(int i=size-1; i>=0; i--)
    {
          while(st.top()>=arr[i])
            {
                st.pop();
            }
            ans[i]=st.top();
            st.push(arr[i]);
        
    }
    return ans;
}

int main()
{

    int arr[4] = {2, 1, 4, 3};

    vector<int> ans = find(arr, 4);

    for(int i = 0; i < 4; i++)
    {
        cout << ans[i] << " ";
    }
}
