class Solution {
public:
int romanCharToInt(char c) {
    
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; // In case of invalid character
    }
}

int romanToInt(const std::string& s) {
    int total = 0;
    int prev_value = 0;

    for (int i = s.size() - 1; i >= 0; --i) {
        int current_value = romanCharToInt(s[i]);
        
        if (current_value < prev_value) {
            total -= current_value;
        } else {
            total += current_value;
        }
        
        prev_value = current_value;
    }

    return total;
}
};

