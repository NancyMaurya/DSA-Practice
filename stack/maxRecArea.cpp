#include<iostream>
#include<vector>
#include<limits.h>
#include<stack>
#include<algorithm>
using namespace std;


class Solution {
private:
    vector<int> nextSmallerElements(vector<int> arr, int n)
    {
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
        for(int i=n-1; i>=0; i--)
        {
                while(st.top()!=-1 && arr[i]<=arr[st.top()])
                {
                    st.pop();
                }
                    ans[i]=st.top();
                    st.push(i);
                
            

        }
        return ans;
    }

    vector<int> prevSmallerElements(vector<int> arr, int n)
    {
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
        for(int i=0; i<n; i++)
        {
                while(st.top()!=-1 && arr[i]<=arr[st.top()])
                {
                    st.pop();
                }
                    ans[i]=st.top();
                    st.push(i);
                
            

        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();

        vector<int> prev(n);
        prev=prevSmallerElements(heights, n);

        vector<int> next(n);
        next=nextSmallerElements(heights, n);

        int area=INT_MIN;
        for(int i=0; i<n; i++)
        {
            int length=heights[i];
            
            if(next[i]==-1)
            next[i]=n;
            int breadth=next[i]-prev[i]-1;

            int newArea=length*breadth;
            area=max(area, newArea);


        }
        return area;
        
    }
};