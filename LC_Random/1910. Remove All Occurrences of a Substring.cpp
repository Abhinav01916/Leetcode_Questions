class Solution {
public:
    string removeOccurrences(string s, string part) {
    int position= s.find(part);// finding index of part in s 
     while(position!= string::npos)
     {
        s.erase(position,part.length()); // erasing or removing part from s
        position=s.find(part);  // updating s 
     }

         return s;

        
    }
};
