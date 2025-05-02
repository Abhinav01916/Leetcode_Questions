class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_sum = 0;
        for(int i =0;i<k;i++){
            max_sum+=nums[i];
        }

        double current_sum=max_sum;
        for(int i =k;i<nums.size();i++){
            current_sum+=nums[i]-nums[i-k];
            max_sum = max(current_sum,max_sum);
        }
        return max_sum/k;
    }
};
