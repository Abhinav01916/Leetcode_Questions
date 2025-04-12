class Solution {
public:
    double myPow(double x, int n) {
        // performing this by exponent by squaring 
        // (2)^4= (2^2)^2=4^2
        long long N=n;// handling if n=INT_MIN
        if(N<0)
        {
         x=1/x;
         N=-N;
        }
        double result=1.0;
        while(N>0)
        {
            if(N%2==1)
            {
                result*=x;
            }
         x*=x;
         N/=2;
        }
        return result;
    }
};
