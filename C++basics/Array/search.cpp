//search an element in an pivoted array

#include <iostream>
#include <vector>

using namespace std;

// Helper function to find the pivot (minimum element index)
int getPivot(vector<int>& arr, int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

// Standard Binary Search helper function
int binarySearch(vector<int>& arr, int s, int e, int key) {
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

// Main logic function to find the position of key 'k'
int findPosition(vector<int>& arr, int n, int k) {
    int pivot = getPivot(arr, n);
    
    // If key lies on the second line (pivot to end)
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, k);
    } 
    // If key lies on the first line (0 to pivot-1)
    else {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main() {
    // Example: A sorted array [1, 2, 3, 7, 9] rotated at index 3 -> [7, 9, 1, 2, 3]
    vector<int> arr = {7, 9, 1, 2, 3};
    int n = arr.size();
    int target = 2;

    int resultIndex = findPosition(arr, n, target);

    if (resultIndex != -1) {
        cout << "Element " << target << " found at index: " << resultIndex << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}