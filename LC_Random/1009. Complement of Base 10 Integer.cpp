class Solution {
public:
    int bitwiseComplement(int n)  {
        int m=n;
        int mask = 0;
         // creating mask for ~n

        if (n==0)
        {
            return 1; //  edge case not covered in the logic
        }
        while(m!=0){
         mask = (mask << 1) | 1;
         m = m >>1;
        }
        int answer= (~n) & mask ;
        return answer;
    }


};
