Solution 1:

class Solution {
public:
    bool isPalindrome(int x) {
        // string value= to_string(x);// typecasted int into str
        // int i=0;
        // int j = value.length()-1; // 2 pointer approach 
        // while(i>=0 && i<=j && j<value.length())
        // {
        //     if(value[i]!=value[j])
        //        {
        //         return false;
        //        }
        //        i++;
        //        j--;
        // }
        // return true;
        
        if(x < 0)
        {
            return 0;
        }

        long y = x;
        int reverse = 0;

        while(y>0)
        {
            if(reverse>INT_MAX/10)
            {
                return 0;
            }
            reverse= reverse*10+ y% 10;
            y=y/10;
        }

        return reverse==x;


    }
};


---------------------------------------------------------------------------------------------------------------------
Solution:2
  Optimal
  

  class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0)) { // if x is negative or ends with zero (as number can't start with zero)
            return false;
        }

        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return (x == reversed) || (x == reversed / 10);
    }
};


