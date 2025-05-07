class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left_sum=0 , right_sum=0, max_sum=0;
        // calulating sum ffrom right 
        for(int i=0;i<=k-1;i++){
          left_sum=left_sum + cardPoints[i];
          max_sum=left_sum;
        }
        // now removing k-1(left) elements and adding right elemebts (n-1)
        int right_index=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
          left_sum=left_sum - cardPoints[i];
          right_sum=right_sum + cardPoints[right_index];
          right_index--;
          max_sum=max(max_sum,right_sum+left_sum);
        }
        return max_sum;
    }
};
