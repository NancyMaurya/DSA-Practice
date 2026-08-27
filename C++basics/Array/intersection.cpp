// check intersecting elements of 2 arrays
#include<iostream>
#include<vector>

using namespace std;
vector<int> findArrayIntersection(int arr1[], int n, int arr2[], int m)
{

int i=0, j=0;
vector<int> ans;
while(i<n && j<m)
{
    if(arr1[i]==arr2[j])
    {
        ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if(arr1[i]<arr2[j])
    {
        i++;
    }
    else
    j++;

}
return ans;
}

int main()
{
    int arr1[7] = {1,2,2,2,3,3,4};
    int arr2[3] = {2,2,3};

    vector<int> ans = findArrayIntersection(arr1, 7, arr2, 3);

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}