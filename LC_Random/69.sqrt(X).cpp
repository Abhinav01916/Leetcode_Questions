class Solution {
public :
    int mySqrt(int x) {
        //implementing the concept of binary search here 
            if(x==0){
                return 0;
            }
            int answer=1;
            int high=x;
            int low=1;
            long mid;
            while(low<=high )
            {
                 mid=low+(high-low)/2;
                if((mid*mid)<=x)
                {
                    answer=mid;
                    low=mid+1;
                }
                else 
                {
                    high=mid-1;
                }
            }
            return answer;

       
    }
};
