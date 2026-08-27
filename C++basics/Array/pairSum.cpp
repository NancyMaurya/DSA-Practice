#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;
    
    // Nested loops to check all pairs
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] + arr[j] == s) {
                vector<int> temp;
                // Store elements in sorted order as required by the problem constraints
                temp.push_back(min(arr[i], arr[j]));   
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    // Sort the final pairs list to return them in lexicographical order
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int targetSum = 5;

    cout << "Input Array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << "\nTarget Sum: " << targetSum << "\n\n";

    vector<vector<int>> result = pairSum(arr, targetSum);

    cout << "Pairs found matching the target sum:" << endl;
    if(result.empty()) {
        cout << "No pairs found." << endl;
    } else {
        for(int i = 0; i < result.size(); i++) {
            cout << "(" << result[i][0] << ", " << result[i][1] << ")" << endl;
        }
    }

    return 0;
}