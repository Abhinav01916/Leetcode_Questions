class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        if ((n & (n - 1)) != 0) return false; // Not power of 2
        return (n - 1) % 3 == 0; // Powers of 4: 1, 4, 16, 64,... have n-1 divisible by 3
    }
};
