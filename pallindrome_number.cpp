#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int x) {
    if (x < 0)
        return false;

    long long o = x, r = 0;

    while (x != 0) {
        r = r * 10 + x % 10;
        x /= 10;
    }

    return o == r;
}

int main() {
    // Example usage:
    int num = 121; // Change this number to test different cases

    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
