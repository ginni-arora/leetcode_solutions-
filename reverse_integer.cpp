class Solution {
    public :
    int reverse(int x) {
        int previous= 0;
        int rev = 0;
        while (x != 0) {
            rev = 10 * rev + x % 10;
            if ((rev - x % 10) / 10 != previous ) { 
                return 0;
            }
            previous = rev;
            x = x / 10;
        }
        return rev;
    }
};
