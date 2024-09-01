#include <iostream>   // This library is for input and output
#include <vector>     // This library allows us to use the vector data structure

using namespace std;

int findPeakElement(vector<int>& nums) {
    int left = 0;                 // Start from the first index of the array
    int right = nums.size() - 1;  // Start from the last index of the array

    while (left < right) {        // Continue the loop until left meets right
        int mid = left + (right - left) / 2;  // Calculate the middle index
        if (nums[mid] > nums[mid + 1]) {      // Check if the middle element is greater than the next element
            right = mid;                      // If true, search the left half by moving right to mid
        } else {
            left = mid + 1;                   // If false, search the right half by moving left to mid + 1
        }
    }
    return left;  // Return the index where left meets right, which is a peak
}

int main() {
    int n;                           // Variable to store the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;                        // Read the number of elements from the user
    
    vector<int> nums(n);             // Create a vector to store the elements
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];              // Read each element into the vector
    }

    int peakIndex = findPeakElement(nums);  // Call the function to find the peak
    cout << "Peak element index: " << peakIndex << endl;  // Print the result

    return 0;  // End of the program
}

