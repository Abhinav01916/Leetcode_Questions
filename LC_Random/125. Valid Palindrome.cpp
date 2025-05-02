class Solution {
public:
        // function to skip alphanumeric characters 
        bool alphanum_chek(char ch ){
            return (ch>='A'&& ch<='Z') ||  (ch>='a'&& ch<='z') || (ch>='0'&& ch<='9') ;
        }
        //function to convert characters into lower  case  
        char convert_lowercase(char ch ){
            if (ch>='A'&& ch<='Z'){
                return ch + 32;
            }
            return ch ;
        }



    bool isPalindrome(string s) {
       int left = 0;
       int right = s.size()-1;
       while(left<right){

          // skip alpha num from left
          while(left < right && !alphanum_chek(s[left])) left++;
         // skip alpha num from left 
          while(left < right && !alphanum_chek(s[right])) right--;

          if (convert_lowercase(s[left])!=convert_lowercase(s[right])){
            return 0;
          }

          left ++;
          right --;
       }
       return 1;

    }
};
