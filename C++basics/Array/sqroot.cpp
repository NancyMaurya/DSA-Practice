#include<iostream>
using namespace std;

long long int binarySearch(int n)
{
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;

    long long int ans=-1;
    while(s<=e)
    {
        long long int square=mid*mid;
        if(square==n)
        return mid;
        if(square<n)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Square root (integer part): " << binarySearch(n);

    return 0;
}

// ===================more precise============================================

#include <iostream>

using namespace std;

// Helper function to find the integer part of the square root using Binary Search
long long int sqrtInteger(int n) {
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e) {
        long long int square = mid * mid;

        if (square == n) {
            return mid;
        }
        if (square < n) {
            ans = mid; // Store the potential answer
            s = mid + 1; // Look for a larger value
        } else {
            e = mid - 1; // Look for a smaller value
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

// Function to calculate the precise floating-point part of the square root
double morePrecision(int n, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++) {
        factor = factor / 10; // e.g., 0.1, then 0.01, then 0.001

        // Incrementally add the factor to check the closest precision limit
        for (double j = ans; j * j < n; j = j + factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n = 37;
    int precision = 3; // Number of decimal places needed

    // Step 1: Get the integral part
    int tempSol = sqrtInteger(n);
    
    // Step 2: Get the precise floating-point answer
    double finalAns = morePrecision(n, precision, tempSol);

    cout << "The precise square root of " << n << " is: " << finalAns << endl;

    return 0;
}