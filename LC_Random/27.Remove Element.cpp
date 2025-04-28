class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0; // pointer variable to array 
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=val)
            {
               nums[i]=nums[j];
            i++;
            }// go ahead my friend 
            
        }
        return i; //i is the count of elements in the array after removing val
                
    }
};
