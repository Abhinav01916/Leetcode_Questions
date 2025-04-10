class Solution {
public:
    bool isHappy(int n) {
      int slow =n;
      int fast = getnext(n);

      while(fast!=1 && fast!=slow)//cycle 
      {
                 slow =getnext(slow);
                 fast = getnext(getnext(fast));
      }
    return fast == 1;

    }

    int getnext(int num)
    {
        int total_sum=0;
        while(num>0)
        {
            int digit=num%10;
            total_sum += digit*digit;
            num/=10;
        }
        return total_sum;

    }
};
