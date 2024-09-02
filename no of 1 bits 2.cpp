#include <iostream>


class Solution {
public:
    int hammingWeight(int  n) { // Function to count number of 1 bits in an unsigned integer
        int count = 0; // Initialize count of 1 bits to 0
        
        while (n) { // Loop until n becomes 0
            if (n % 2 == 1) { // Check if the least significant bit (LSB) is 1
                count++; // Increment count if the LSB is 1
            }
            n >>= 1; // Right shift n to check the next bit
        }
        
        return count; // Return the total count of 1 bits
    }
};

int main() {
    Solution solution;
   int  n = 11; // Example input
    int result = solution.hammingWeight(n);
    
    std::cout << "Number of 1 bits in " << n << " is: " << result << std::endl;
    
    return 0;
}

