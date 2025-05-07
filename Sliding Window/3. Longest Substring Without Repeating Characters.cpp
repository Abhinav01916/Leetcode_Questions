class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int hash[256]={-1};
        int left =0,right=0;
        int max_length = 0;
        // condition
        while(right<n){
            
         if(hash[s[right]]!=-1){
            if(hash[s[right]]>=left){
                left=hash[s[right]]+1;
            }
         }
         
         max_length=max(max_length,right-left+1);
         hash[s[right]]=right;
         right++;

        }
        return max_length;
    }
};
