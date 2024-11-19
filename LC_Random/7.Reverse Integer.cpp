class Solution {
public:
    int reverse(int x) {
        
      int answer= 0;
      while(x!=0)
      {  
       int digit=x%10;

       if((answer>INT_MAX/10) || (answer<INT_MIN/10))  // edge case 
       {
        return 0;
       }
       answer=(10*answer)+digit;
          x=x/10;
      }
    
      return answer;
       

    }
    
};
