class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i =n-2;
        //finding the first decreasing element 
        while(i>=0 && nums[i]>=nums[i+1]){
            i--;
        }

        if(i>=0){
            //finding element just greater than nums[i]
            int j = n-1;
            while(nums[j]<=nums[i]){
                j--;
            }
            swap(nums[i],nums[j]);
        }

        // now reversing all elements after i
        reverse(nums.begin()+i+1,nums.end());
    }
};
