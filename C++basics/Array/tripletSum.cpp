#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> TripletSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;

    // Brute-force: check every possible triplet
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = i + 1; j < arr.size(); j++)
        {
            for(int k = j + 1; k < arr.size(); k++)
            {
                if(arr[i] + arr[j] + arr[k] == s)
                {
                    vector<int> temp;

                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);

                    // Store triplet in sorted order
                    sort(temp.begin(), temp.end());

                    ans.push_back(temp);
                }
            }
        }
    }

    // Sort all triplets lexicographically
    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int targetSum = 9;

    cout << "Input Array: ";
    for(int num : arr)
    {
        cout << num << " ";
    }

    cout << "\nTarget Sum: " << targetSum << "\n\n";

    vector<vector<int>> result = TripletSum(arr, targetSum);

    cout << "Triplets found matching the target sum:\n";

    if(result.empty())
    {
        cout << "No triplets found.\n";
    }
    else
    {
        for(int i = 0; i < result.size(); i++)
        {
            cout << "("
                 << result[i][0] << ", "
                 << result[i][1] << ", "
                 << result[i][2] << ")\n";
        }
    }

    return 0;
}