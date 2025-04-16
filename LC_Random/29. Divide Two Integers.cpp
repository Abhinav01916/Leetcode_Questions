class Solution {
public:
    int divide(int dividend, int divisor) {
        // handling the edge case 
        if (dividend == INT_MIN && divisor==-1 ) return INT_MAX;

        // handling the overflow conditions 
        long long a= abs((long long)dividend);
        long long b = abs((long long)divisor);

        //Now implementing logic with bit manipulation 
        long result =0;
        while(a>=b){
          long long temp=b;
          long long multiple =1;
          while (a>=(temp<<1))
          {
            temp = temp<<1;
            multiple=multiple<<1;
          }
          a=a-temp;
          result+=multiple;
        } 
        return ((dividend>0) == (divisor>0))? result:-result;
    }
};
