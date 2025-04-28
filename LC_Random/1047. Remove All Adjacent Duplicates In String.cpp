class Solution {
public:
    string removeDuplicates(string s) {
        string answer="";
        int i=0;
        while(i<s.length())
        {
           if ( answer.length()>0)
           { 
                 // chek and remove remove Duplicates 
                 if (answer[answer.length()-1]==s[i])
                 {
                    answer.pop_back();
                 }
                 else{
                        answer.push_back(s[i]);
                     }
           }
           else
           {
            answer.push_back(s[i]); 
            
           }
           i++;
        }
        return answer;
        
    }
};
