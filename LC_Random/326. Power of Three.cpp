class Solution {
public:
    bool isPowerOfThree(int n) {
       if (n<=0) return 0;
       return (1162261467%n==0);// highest power od 3 in the range of int ie 3^19 
    }
};
