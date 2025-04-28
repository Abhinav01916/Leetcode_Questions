class Solution {
public:
    int findComplement(int num) {
        int m=num;
        int mask = 0;
        // creating mask for ~n

        if (num==0)
        {
            return 1; //  edge case not covered in the logic
        }
        while(m!=0){
         mask = (mask << 1) | 1;
         m = m >>1;
        }
        int answer= (~num) & mask ;
        return answer;
    }
};
