#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int longestSubstringWithoutRepeating(string s) {
    unordered_map<char, int> lastIndex; // To store the last seen index of each character
    int maxLength = 0;
    int start = 0; // Sliding window start

    for (int end = 0; end < s.length(); end++) {
        char currentChar = s[end];

        // If the character is already in the window, move start right
        if (lastIndex.find(currentChar) != lastIndex.end()) {
            // Move the start only if it is behind the last occurrence of currentChar
            start = max(start, lastIndex[currentChar] + 1);
        }

        // Update the last seen index of the current character
        lastIndex[currentChar] = end;

        // Calculate the current length of the substring
        int currentLength = end - start + 1;

        // Update the maximum length
        maxLength = max(maxLength, currentLength);
    }

    return maxLength;
}

int main() {
    string a;
    cout << "Enter a string: ";
    cin >> a;

    int result = longestSubstringWithoutRepeating(a);
    cout << "The length of the longest substring without repeating characters is: " << result << endl;

    return 0;
}
