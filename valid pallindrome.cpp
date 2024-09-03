#include <iostream>
#include <cctype>  // for isalnum and tolower functions
#include <string>

using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;
    
    while (left < right) {
        // Move left index to the next alphanumeric character
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        
        // Move right index to the previous alphanumeric character
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        
        // Compare characters at left and right, ignoring case
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        
        // Move towards the center
        left++;
        right--;
    }
    
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    if (isPalindrome(s)) {
        cout << "The string is a valid palindrome." << endl;
    } else {
        cout << "The string is not a valid palindrome." << endl;
    }

    return 0;
}

