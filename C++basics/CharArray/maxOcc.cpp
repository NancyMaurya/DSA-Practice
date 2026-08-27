#include <iostream>
#include <string>
using namespace std;

char getMaxOccuringChar(string s) {
    int arr[26] = {0};

    // Create an array of count of characters
    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int number = 0;
        
        // Mapping lowercase characters to 0-25 indexes
        number = ch - 'a';
        arr[number]++;
    }

    // Find the maximum occurring character index
    int maxi = -1;
    int ans = 0;
    for(int i = 0; i < 26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    // Convert the index back to character
    return 'a' + ans;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << "Maximum occurring character is: " << getMaxOccuringChar(s) << endl;

    return 0;
}

