class Solution {
public:
 bool canBeFactored(long long pal, long long lower, long long upper) {
        for (long long i = upper; i >= lower; --i) {
            if (pal / i > upper) break;
            if (pal % i == 0) return true;
        }
        return false;
    }
    int largestPalindrome(int n) {
        if (n == 1) return 9;

        long long upper = pow(10, n) - 1;
        long long lower = pow(10, n - 1);

        for (long long left = upper; left >= lower; --left) {
            // Create palindrome by mirroring
            string s = to_string(left);
            string rev = s;
            reverse(rev.begin(), rev.end());
            long long pal = stoll(s + rev); //Hamesha  Even length palindrome hi generate Odd? 

            // Check karo palindrome can be factored into two n-digit numbers or not 
            if (canBeFactored(pal, lower, upper))
                return pal % 1337;
        }

        return -1; // Should never reach here
    
    }
};


//below sol gives TLE
// class Solution {
// public:
//  bool isPalindrome(long long n) {
//         long long original = n, reversed = 0;
//         while (n > 0) {
//             reversed = reversed * 10 + n % 10;
//             n /= 10;
//         }
//         return original == reversed;
//     }
//     int largestPalindrome(int n) {
//         if(n==1) return 9; // edge case 

//         long long upper=pow(10,n)-1;
//         long long lower=pow(10,n-1);
//         long long max_pal=0;

//         for(long long i =upper;i>= lower;i--){
//             if(i*i<max_pal) break;

//             for(long long j=i; j>=lower;j-- ){
//                 long long product = i*j;

//                  if(product<max_pal) break;


//                  if(isPalindrome(product)){
//                     max_pal=product;
//                     break;
//                  }
//             }
//         }

//       return max_pal % 1337;
//     }

   
// };
