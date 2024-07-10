class Solution {
    public int reverse(int x) {
        long rev = 0;
        while (x != 0) {
            rev = 10 * rev + x % 10;
            x = x / 10;
        }
        return rev > Integer.MAX_VALUE || rev < Integer.MIN_VALUE
               ? 0
               : (int) rev;
    }
}
