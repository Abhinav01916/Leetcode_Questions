class Solution {
public:
    string convertToBase7(int num) {
        if (num ==0) return "0";
        bool is_negative=false;
        if (num<0)
        {
            num =-num;
            is_negative=true;
        }
        string result="";
        while(num>0){
        result+=to_string(num%7);
        num/=7;
        }
        reverse(result.begin(),result.end());
        if (is_negative){
            return "-" +result;
        } else return result;
    }
};
