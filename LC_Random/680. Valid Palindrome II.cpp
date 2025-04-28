class Solution {
public:

    bool chek_palindrome(string s,int i,int j)
     { 

        while(i<=j)
        {
         if(s[i]!=s[j])
         {
          return false;

         }
         else{
            // a[i]=a[j]
            i++;
            j--;
         }
        }
         return true;
     }


    bool validPalindrome(string s) {

        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                //chek substring are palindrome or  not
                return   ( chek_palindrome(s,i,j-1) || chek_palindrome(s,i+1,j)  );
            }
            else
            {
                i++;
                j--;
            }

        }
        return true;
        
    }
};
