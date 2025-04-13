258. Add Digits
class Solution {
public:
    int addDigits(int num) {
       // one line Solution
       if (num==0) return num;
       if (num==9) return num;
       return (num%9==0)?  9 : num%9 ;
    }
};
// class Solution {
// public:
//     int addDigits(int num) {
//         if (num==0) return num;
//         if (num<10) return num;
        
//         while(num>=10){
//          int sum=0;   
//             string s =to_string(num);
//             for(int i=0;i<s.length();i++){
//                 sum+=s[i]-'0';//convert char to int 
//                 // sum += s[i] - '0'; converts the character digit s[i] (like '3') to its integer value
//                 //  (like 3) by subtracting the ASCII value of '0' (48) from the ASCII value of the digit, 
//                 //  then adds it to sum.
                
//             }
//             num=sum;
//         }
//          return num;
//     }
// };
