// Problem statement
// Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

// Example:

// We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
// based indexing so the subarray {5, 6} will be reversed and our 
// output array will be {1, 2, 3, 4, 6, 5}.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void reverseArray(vector<int> &arr , int m) {
    int start=m+1;
    int end=arr.size()-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    vector <int> arr={2,4,5,7,8};
    reverseArray(arr, 2);

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

}