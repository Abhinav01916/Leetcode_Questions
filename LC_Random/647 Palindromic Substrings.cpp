class Solution {
public:
  
  int expandaroundindex(string s, int i, int j)
  {
    int count =0;
    while(i>=0 && j<s.length() && s[i]==s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
  }
    
    int countSubstrings(string s) {
     
    int count = 0;
    for(int i=0;i<s.length();i++)
    {
       //count of odd palindromic str
        int odd_answer= expandaroundindex(s,i,i);
        count+=odd_answer;

        //count of even palindromic str
        int even_answer= expandaroundindex(s,i,i+1);
        count+=even_answer;


    }
     return count;
    }
};
